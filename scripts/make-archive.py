#!/usr/bin/env python3
'''
Make deterministic tar.gz archive for distribution.
'''
import hashlib
import os
import subprocess
import sys

GIT='git'

if len(sys.argv) < 2:
    print('Usage: make-archive.py <version>', file=sys.stderr)
    sys.exit(1)

version = sys.argv[1]

tag = f'v{version}'
prefix = f'qtsowrap-{version}/'
outfile = f'qtsowrap-{version}.tar.gz'
outpath = os.path.join(os.getcwd(), outfile)

# Run in repo root.
root = subprocess.check_output(["git", "rev-parse", "--show-toplevel"]).decode("utf8").strip()
os.chdir(root)

# Make archive.
subprocess.run([GIT, 'archive', '--format', 'tar.gz', '-9', '--prefix=' + prefix, '-o', outpath, tag], check=True)

hasher = hashlib.sha256()
with open(outpath, 'rb') as f:
    hasher.update(f.read())
sha256_hash = hasher.hexdigest()

print(f'$(package)_file_name={outfile}')
print(f'$(package)_sha256_hash={sha256_hash}')
