#ifndef DYLIBLOAD_WRAPPER_FREETYPE
#define DYLIBLOAD_WRAPPER_FREETYPE
/* This file is generated. Do not edit!
   see https://github.com/hpvb/dynload-wrapper (patched) for details
   generated by scripts/generate-wrapper.py 0.5
   flags: scripts/generate-wrapper.py --include include/ft2build.h --include include/freetype/freetype.h --include include/freetype/ftoutln.h --include include/freetype/ftsynth.h --include include/freetype/tttables.h --include include/freetype/t1tables.h --include include/freetype/ftglyph.h --include include/freetype/ftmodapi.h --include include/freetype/ftlcdfil.h --include include/freetype/config/ftoption.h --include include/freetype/ftfntfmt.h --include include/freetype/fterrors.h --sys-include <ft2build.h> --sys-include <freetype/freetype.h> --sys-include <freetype/ftoutln.h> --sys-include <freetype/ftsynth.h> --sys-include <freetype/tttables.h> --sys-include <freetype/t1tables.h> --sys-include <freetype/ftglyph.h> --sys-include <freetype/ftmodapi.h> --sys-include <freetype/ftlcdfil.h> --sys-include <freetype/config/ftoption.h> --sys-include <freetype/ftfntfmt.h> --sys-include <freetype/fterrors.h> --soname libfreetype.so.6 --init-name freetype --output-header include_gen/freetype-so_wrap.h --output-implementation src_gen/freetype-so_wrap.c --ignore-other --include-dir include
*/
#include <stdint.h>

#define FT_Error_String FT_Error_String_dylibloader_orig_freetype
#define FT_Init_FreeType FT_Init_FreeType_dylibloader_orig_freetype
#define FT_Done_FreeType FT_Done_FreeType_dylibloader_orig_freetype
#define FT_New_Face FT_New_Face_dylibloader_orig_freetype
#define FT_New_Memory_Face FT_New_Memory_Face_dylibloader_orig_freetype
#define FT_Open_Face FT_Open_Face_dylibloader_orig_freetype
#define FT_Attach_File FT_Attach_File_dylibloader_orig_freetype
#define FT_Attach_Stream FT_Attach_Stream_dylibloader_orig_freetype
#define FT_Reference_Face FT_Reference_Face_dylibloader_orig_freetype
#define FT_Done_Face FT_Done_Face_dylibloader_orig_freetype
#define FT_Select_Size FT_Select_Size_dylibloader_orig_freetype
#define FT_Request_Size FT_Request_Size_dylibloader_orig_freetype
#define FT_Set_Char_Size FT_Set_Char_Size_dylibloader_orig_freetype
#define FT_Set_Pixel_Sizes FT_Set_Pixel_Sizes_dylibloader_orig_freetype
#define FT_Load_Glyph FT_Load_Glyph_dylibloader_orig_freetype
#define FT_Load_Char FT_Load_Char_dylibloader_orig_freetype
#define FT_Set_Transform FT_Set_Transform_dylibloader_orig_freetype
#define FT_Get_Transform FT_Get_Transform_dylibloader_orig_freetype
#define FT_Render_Glyph FT_Render_Glyph_dylibloader_orig_freetype
#define FT_Get_Kerning FT_Get_Kerning_dylibloader_orig_freetype
#define FT_Get_Track_Kerning FT_Get_Track_Kerning_dylibloader_orig_freetype
#define FT_Select_Charmap FT_Select_Charmap_dylibloader_orig_freetype
#define FT_Set_Charmap FT_Set_Charmap_dylibloader_orig_freetype
#define FT_Get_Charmap_Index FT_Get_Charmap_Index_dylibloader_orig_freetype
#define FT_Get_Char_Index FT_Get_Char_Index_dylibloader_orig_freetype
#define FT_Get_First_Char FT_Get_First_Char_dylibloader_orig_freetype
#define FT_Get_Next_Char FT_Get_Next_Char_dylibloader_orig_freetype
#define FT_Face_Properties FT_Face_Properties_dylibloader_orig_freetype
#define FT_Get_Name_Index FT_Get_Name_Index_dylibloader_orig_freetype
#define FT_Get_Glyph_Name FT_Get_Glyph_Name_dylibloader_orig_freetype
#define FT_Get_Postscript_Name FT_Get_Postscript_Name_dylibloader_orig_freetype
#define FT_Get_SubGlyph_Info FT_Get_SubGlyph_Info_dylibloader_orig_freetype
#define FT_Get_FSType_Flags FT_Get_FSType_Flags_dylibloader_orig_freetype
#define FT_Face_GetCharVariantIndex FT_Face_GetCharVariantIndex_dylibloader_orig_freetype
#define FT_Face_GetCharVariantIsDefault FT_Face_GetCharVariantIsDefault_dylibloader_orig_freetype
#define FT_Face_GetVariantSelectors FT_Face_GetVariantSelectors_dylibloader_orig_freetype
#define FT_Face_GetVariantsOfChar FT_Face_GetVariantsOfChar_dylibloader_orig_freetype
#define FT_Face_GetCharsOfVariant FT_Face_GetCharsOfVariant_dylibloader_orig_freetype
#define FT_MulDiv FT_MulDiv_dylibloader_orig_freetype
#define FT_MulFix FT_MulFix_dylibloader_orig_freetype
#define FT_DivFix FT_DivFix_dylibloader_orig_freetype
#define FT_RoundFix FT_RoundFix_dylibloader_orig_freetype
#define FT_CeilFix FT_CeilFix_dylibloader_orig_freetype
#define FT_FloorFix FT_FloorFix_dylibloader_orig_freetype
#define FT_Vector_Transform FT_Vector_Transform_dylibloader_orig_freetype
#define FT_Library_Version FT_Library_Version_dylibloader_orig_freetype
#define FT_Face_CheckTrueTypePatents FT_Face_CheckTrueTypePatents_dylibloader_orig_freetype
#define FT_Face_SetUnpatentedHinting FT_Face_SetUnpatentedHinting_dylibloader_orig_freetype
#define FT_Outline_Decompose FT_Outline_Decompose_dylibloader_orig_freetype
#define FT_Outline_New FT_Outline_New_dylibloader_orig_freetype
#define FT_Outline_Done FT_Outline_Done_dylibloader_orig_freetype
#define FT_Outline_Check FT_Outline_Check_dylibloader_orig_freetype
#define FT_Outline_Get_CBox FT_Outline_Get_CBox_dylibloader_orig_freetype
#define FT_Outline_Translate FT_Outline_Translate_dylibloader_orig_freetype
#define FT_Outline_Copy FT_Outline_Copy_dylibloader_orig_freetype
#define FT_Outline_Transform FT_Outline_Transform_dylibloader_orig_freetype
#define FT_Outline_Embolden FT_Outline_Embolden_dylibloader_orig_freetype
#define FT_Outline_EmboldenXY FT_Outline_EmboldenXY_dylibloader_orig_freetype
#define FT_Outline_Reverse FT_Outline_Reverse_dylibloader_orig_freetype
#define FT_Outline_Get_Bitmap FT_Outline_Get_Bitmap_dylibloader_orig_freetype
#define FT_Outline_Render FT_Outline_Render_dylibloader_orig_freetype
#define FT_Outline_Get_Orientation FT_Outline_Get_Orientation_dylibloader_orig_freetype
#define FT_GlyphSlot_Embolden FT_GlyphSlot_Embolden_dylibloader_orig_freetype
#define FT_GlyphSlot_AdjustWeight FT_GlyphSlot_AdjustWeight_dylibloader_orig_freetype
#define FT_GlyphSlot_Oblique FT_GlyphSlot_Oblique_dylibloader_orig_freetype
#define FT_GlyphSlot_Slant FT_GlyphSlot_Slant_dylibloader_orig_freetype
#define FT_Get_Sfnt_Table FT_Get_Sfnt_Table_dylibloader_orig_freetype
#define FT_Load_Sfnt_Table FT_Load_Sfnt_Table_dylibloader_orig_freetype
#define FT_Sfnt_Table_Info FT_Sfnt_Table_Info_dylibloader_orig_freetype
#define FT_Get_CMap_Language_ID FT_Get_CMap_Language_ID_dylibloader_orig_freetype
#define FT_Get_CMap_Format FT_Get_CMap_Format_dylibloader_orig_freetype
#define FT_Has_PS_Glyph_Names FT_Has_PS_Glyph_Names_dylibloader_orig_freetype
#define FT_Get_PS_Font_Info FT_Get_PS_Font_Info_dylibloader_orig_freetype
#define FT_Get_PS_Font_Private FT_Get_PS_Font_Private_dylibloader_orig_freetype
#define FT_Get_PS_Font_Value FT_Get_PS_Font_Value_dylibloader_orig_freetype
#define FT_New_Glyph FT_New_Glyph_dylibloader_orig_freetype
#define FT_Get_Glyph FT_Get_Glyph_dylibloader_orig_freetype
#define FT_Glyph_Copy FT_Glyph_Copy_dylibloader_orig_freetype
#define FT_Glyph_Transform FT_Glyph_Transform_dylibloader_orig_freetype
#define FT_Glyph_Get_CBox FT_Glyph_Get_CBox_dylibloader_orig_freetype
#define FT_Glyph_To_Bitmap FT_Glyph_To_Bitmap_dylibloader_orig_freetype
#define FT_Done_Glyph FT_Done_Glyph_dylibloader_orig_freetype
#define FT_Matrix_Multiply FT_Matrix_Multiply_dylibloader_orig_freetype
#define FT_Matrix_Invert FT_Matrix_Invert_dylibloader_orig_freetype
#define FT_Add_Module FT_Add_Module_dylibloader_orig_freetype
#define FT_Get_Module FT_Get_Module_dylibloader_orig_freetype
#define FT_Remove_Module FT_Remove_Module_dylibloader_orig_freetype
#define FT_Property_Set FT_Property_Set_dylibloader_orig_freetype
#define FT_Property_Get FT_Property_Get_dylibloader_orig_freetype
#define FT_Set_Default_Properties FT_Set_Default_Properties_dylibloader_orig_freetype
#define FT_Reference_Library FT_Reference_Library_dylibloader_orig_freetype
#define FT_New_Library FT_New_Library_dylibloader_orig_freetype
#define FT_Done_Library FT_Done_Library_dylibloader_orig_freetype
#define FT_Set_Debug_Hook FT_Set_Debug_Hook_dylibloader_orig_freetype
#define FT_Add_Default_Modules FT_Add_Default_Modules_dylibloader_orig_freetype
#define FT_Get_TrueType_Engine_Type FT_Get_TrueType_Engine_Type_dylibloader_orig_freetype
#define FT_Library_SetLcdFilter FT_Library_SetLcdFilter_dylibloader_orig_freetype
#define FT_Library_SetLcdFilterWeights FT_Library_SetLcdFilterWeights_dylibloader_orig_freetype
#define FT_Library_SetLcdGeometry FT_Library_SetLcdGeometry_dylibloader_orig_freetype
#define FT_Get_Font_Format FT_Get_Font_Format_dylibloader_orig_freetype
#define FT_Get_X11_Font_Format FT_Get_X11_Font_Format_dylibloader_orig_freetype
#include <ft2build.h>
#include <freetype/freetype.h>
#include <freetype/ftoutln.h>
#include <freetype/ftsynth.h>
#include <freetype/tttables.h>
#include <freetype/t1tables.h>
#include <freetype/ftglyph.h>
#include <freetype/ftmodapi.h>
#include <freetype/ftlcdfil.h>
#include <freetype/config/ftoption.h>
#include <freetype/ftfntfmt.h>
#include <freetype/fterrors.h>
#undef FT_Error_String
#undef FT_Init_FreeType
#undef FT_Done_FreeType
#undef FT_New_Face
#undef FT_New_Memory_Face
#undef FT_Open_Face
#undef FT_Attach_File
#undef FT_Attach_Stream
#undef FT_Reference_Face
#undef FT_Done_Face
#undef FT_Select_Size
#undef FT_Request_Size
#undef FT_Set_Char_Size
#undef FT_Set_Pixel_Sizes
#undef FT_Load_Glyph
#undef FT_Load_Char
#undef FT_Set_Transform
#undef FT_Get_Transform
#undef FT_Render_Glyph
#undef FT_Get_Kerning
#undef FT_Get_Track_Kerning
#undef FT_Select_Charmap
#undef FT_Set_Charmap
#undef FT_Get_Charmap_Index
#undef FT_Get_Char_Index
#undef FT_Get_First_Char
#undef FT_Get_Next_Char
#undef FT_Face_Properties
#undef FT_Get_Name_Index
#undef FT_Get_Glyph_Name
#undef FT_Get_Postscript_Name
#undef FT_Get_SubGlyph_Info
#undef FT_Get_FSType_Flags
#undef FT_Face_GetCharVariantIndex
#undef FT_Face_GetCharVariantIsDefault
#undef FT_Face_GetVariantSelectors
#undef FT_Face_GetVariantsOfChar
#undef FT_Face_GetCharsOfVariant
#undef FT_MulDiv
#undef FT_MulFix
#undef FT_DivFix
#undef FT_RoundFix
#undef FT_CeilFix
#undef FT_FloorFix
#undef FT_Vector_Transform
#undef FT_Library_Version
#undef FT_Face_CheckTrueTypePatents
#undef FT_Face_SetUnpatentedHinting
#undef FT_Outline_Decompose
#undef FT_Outline_New
#undef FT_Outline_Done
#undef FT_Outline_Check
#undef FT_Outline_Get_CBox
#undef FT_Outline_Translate
#undef FT_Outline_Copy
#undef FT_Outline_Transform
#undef FT_Outline_Embolden
#undef FT_Outline_EmboldenXY
#undef FT_Outline_Reverse
#undef FT_Outline_Get_Bitmap
#undef FT_Outline_Render
#undef FT_Outline_Get_Orientation
#undef FT_GlyphSlot_Embolden
#undef FT_GlyphSlot_AdjustWeight
#undef FT_GlyphSlot_Oblique
#undef FT_GlyphSlot_Slant
#undef FT_Get_Sfnt_Table
#undef FT_Load_Sfnt_Table
#undef FT_Sfnt_Table_Info
#undef FT_Get_CMap_Language_ID
#undef FT_Get_CMap_Format
#undef FT_Has_PS_Glyph_Names
#undef FT_Get_PS_Font_Info
#undef FT_Get_PS_Font_Private
#undef FT_Get_PS_Font_Value
#undef FT_New_Glyph
#undef FT_Get_Glyph
#undef FT_Glyph_Copy
#undef FT_Glyph_Transform
#undef FT_Glyph_Get_CBox
#undef FT_Glyph_To_Bitmap
#undef FT_Done_Glyph
#undef FT_Matrix_Multiply
#undef FT_Matrix_Invert
#undef FT_Add_Module
#undef FT_Get_Module
#undef FT_Remove_Module
#undef FT_Property_Set
#undef FT_Property_Get
#undef FT_Set_Default_Properties
#undef FT_Reference_Library
#undef FT_New_Library
#undef FT_Done_Library
#undef FT_Set_Debug_Hook
#undef FT_Add_Default_Modules
#undef FT_Get_TrueType_Engine_Type
#undef FT_Library_SetLcdFilter
#undef FT_Library_SetLcdFilterWeights
#undef FT_Library_SetLcdGeometry
#undef FT_Get_Font_Format
#undef FT_Get_X11_Font_Format
#ifdef __cplusplus
extern "C" {
#endif
#define FT_Error_String FT_Error_String_dylibloader_wrapper_freetype
#define FT_Init_FreeType FT_Init_FreeType_dylibloader_wrapper_freetype
#define FT_Done_FreeType FT_Done_FreeType_dylibloader_wrapper_freetype
#define FT_New_Face FT_New_Face_dylibloader_wrapper_freetype
#define FT_New_Memory_Face FT_New_Memory_Face_dylibloader_wrapper_freetype
#define FT_Open_Face FT_Open_Face_dylibloader_wrapper_freetype
#define FT_Attach_File FT_Attach_File_dylibloader_wrapper_freetype
#define FT_Attach_Stream FT_Attach_Stream_dylibloader_wrapper_freetype
#define FT_Reference_Face FT_Reference_Face_dylibloader_wrapper_freetype
#define FT_Done_Face FT_Done_Face_dylibloader_wrapper_freetype
#define FT_Select_Size FT_Select_Size_dylibloader_wrapper_freetype
#define FT_Request_Size FT_Request_Size_dylibloader_wrapper_freetype
#define FT_Set_Char_Size FT_Set_Char_Size_dylibloader_wrapper_freetype
#define FT_Set_Pixel_Sizes FT_Set_Pixel_Sizes_dylibloader_wrapper_freetype
#define FT_Load_Glyph FT_Load_Glyph_dylibloader_wrapper_freetype
#define FT_Load_Char FT_Load_Char_dylibloader_wrapper_freetype
#define FT_Set_Transform FT_Set_Transform_dylibloader_wrapper_freetype
#define FT_Get_Transform FT_Get_Transform_dylibloader_wrapper_freetype
#define FT_Render_Glyph FT_Render_Glyph_dylibloader_wrapper_freetype
#define FT_Get_Kerning FT_Get_Kerning_dylibloader_wrapper_freetype
#define FT_Get_Track_Kerning FT_Get_Track_Kerning_dylibloader_wrapper_freetype
#define FT_Select_Charmap FT_Select_Charmap_dylibloader_wrapper_freetype
#define FT_Set_Charmap FT_Set_Charmap_dylibloader_wrapper_freetype
#define FT_Get_Charmap_Index FT_Get_Charmap_Index_dylibloader_wrapper_freetype
#define FT_Get_Char_Index FT_Get_Char_Index_dylibloader_wrapper_freetype
#define FT_Get_First_Char FT_Get_First_Char_dylibloader_wrapper_freetype
#define FT_Get_Next_Char FT_Get_Next_Char_dylibloader_wrapper_freetype
#define FT_Face_Properties FT_Face_Properties_dylibloader_wrapper_freetype
#define FT_Get_Name_Index FT_Get_Name_Index_dylibloader_wrapper_freetype
#define FT_Get_Glyph_Name FT_Get_Glyph_Name_dylibloader_wrapper_freetype
#define FT_Get_Postscript_Name FT_Get_Postscript_Name_dylibloader_wrapper_freetype
#define FT_Get_SubGlyph_Info FT_Get_SubGlyph_Info_dylibloader_wrapper_freetype
#define FT_Get_FSType_Flags FT_Get_FSType_Flags_dylibloader_wrapper_freetype
#define FT_Face_GetCharVariantIndex FT_Face_GetCharVariantIndex_dylibloader_wrapper_freetype
#define FT_Face_GetCharVariantIsDefault FT_Face_GetCharVariantIsDefault_dylibloader_wrapper_freetype
#define FT_Face_GetVariantSelectors FT_Face_GetVariantSelectors_dylibloader_wrapper_freetype
#define FT_Face_GetVariantsOfChar FT_Face_GetVariantsOfChar_dylibloader_wrapper_freetype
#define FT_Face_GetCharsOfVariant FT_Face_GetCharsOfVariant_dylibloader_wrapper_freetype
#define FT_MulDiv FT_MulDiv_dylibloader_wrapper_freetype
#define FT_MulFix FT_MulFix_dylibloader_wrapper_freetype
#define FT_DivFix FT_DivFix_dylibloader_wrapper_freetype
#define FT_RoundFix FT_RoundFix_dylibloader_wrapper_freetype
#define FT_CeilFix FT_CeilFix_dylibloader_wrapper_freetype
#define FT_FloorFix FT_FloorFix_dylibloader_wrapper_freetype
#define FT_Vector_Transform FT_Vector_Transform_dylibloader_wrapper_freetype
#define FT_Library_Version FT_Library_Version_dylibloader_wrapper_freetype
#define FT_Face_CheckTrueTypePatents FT_Face_CheckTrueTypePatents_dylibloader_wrapper_freetype
#define FT_Face_SetUnpatentedHinting FT_Face_SetUnpatentedHinting_dylibloader_wrapper_freetype
#define FT_Outline_Decompose FT_Outline_Decompose_dylibloader_wrapper_freetype
#define FT_Outline_New FT_Outline_New_dylibloader_wrapper_freetype
#define FT_Outline_Done FT_Outline_Done_dylibloader_wrapper_freetype
#define FT_Outline_Check FT_Outline_Check_dylibloader_wrapper_freetype
#define FT_Outline_Get_CBox FT_Outline_Get_CBox_dylibloader_wrapper_freetype
#define FT_Outline_Translate FT_Outline_Translate_dylibloader_wrapper_freetype
#define FT_Outline_Copy FT_Outline_Copy_dylibloader_wrapper_freetype
#define FT_Outline_Transform FT_Outline_Transform_dylibloader_wrapper_freetype
#define FT_Outline_Embolden FT_Outline_Embolden_dylibloader_wrapper_freetype
#define FT_Outline_EmboldenXY FT_Outline_EmboldenXY_dylibloader_wrapper_freetype
#define FT_Outline_Reverse FT_Outline_Reverse_dylibloader_wrapper_freetype
#define FT_Outline_Get_Bitmap FT_Outline_Get_Bitmap_dylibloader_wrapper_freetype
#define FT_Outline_Render FT_Outline_Render_dylibloader_wrapper_freetype
#define FT_Outline_Get_Orientation FT_Outline_Get_Orientation_dylibloader_wrapper_freetype
#define FT_GlyphSlot_Embolden FT_GlyphSlot_Embolden_dylibloader_wrapper_freetype
#define FT_GlyphSlot_AdjustWeight FT_GlyphSlot_AdjustWeight_dylibloader_wrapper_freetype
#define FT_GlyphSlot_Oblique FT_GlyphSlot_Oblique_dylibloader_wrapper_freetype
#define FT_GlyphSlot_Slant FT_GlyphSlot_Slant_dylibloader_wrapper_freetype
#define FT_Get_Sfnt_Table FT_Get_Sfnt_Table_dylibloader_wrapper_freetype
#define FT_Load_Sfnt_Table FT_Load_Sfnt_Table_dylibloader_wrapper_freetype
#define FT_Sfnt_Table_Info FT_Sfnt_Table_Info_dylibloader_wrapper_freetype
#define FT_Get_CMap_Language_ID FT_Get_CMap_Language_ID_dylibloader_wrapper_freetype
#define FT_Get_CMap_Format FT_Get_CMap_Format_dylibloader_wrapper_freetype
#define FT_Has_PS_Glyph_Names FT_Has_PS_Glyph_Names_dylibloader_wrapper_freetype
#define FT_Get_PS_Font_Info FT_Get_PS_Font_Info_dylibloader_wrapper_freetype
#define FT_Get_PS_Font_Private FT_Get_PS_Font_Private_dylibloader_wrapper_freetype
#define FT_Get_PS_Font_Value FT_Get_PS_Font_Value_dylibloader_wrapper_freetype
#define FT_New_Glyph FT_New_Glyph_dylibloader_wrapper_freetype
#define FT_Get_Glyph FT_Get_Glyph_dylibloader_wrapper_freetype
#define FT_Glyph_Copy FT_Glyph_Copy_dylibloader_wrapper_freetype
#define FT_Glyph_Transform FT_Glyph_Transform_dylibloader_wrapper_freetype
#define FT_Glyph_Get_CBox FT_Glyph_Get_CBox_dylibloader_wrapper_freetype
#define FT_Glyph_To_Bitmap FT_Glyph_To_Bitmap_dylibloader_wrapper_freetype
#define FT_Done_Glyph FT_Done_Glyph_dylibloader_wrapper_freetype
#define FT_Matrix_Multiply FT_Matrix_Multiply_dylibloader_wrapper_freetype
#define FT_Matrix_Invert FT_Matrix_Invert_dylibloader_wrapper_freetype
#define FT_Add_Module FT_Add_Module_dylibloader_wrapper_freetype
#define FT_Get_Module FT_Get_Module_dylibloader_wrapper_freetype
#define FT_Remove_Module FT_Remove_Module_dylibloader_wrapper_freetype
#define FT_Property_Set FT_Property_Set_dylibloader_wrapper_freetype
#define FT_Property_Get FT_Property_Get_dylibloader_wrapper_freetype
#define FT_Set_Default_Properties FT_Set_Default_Properties_dylibloader_wrapper_freetype
#define FT_Reference_Library FT_Reference_Library_dylibloader_wrapper_freetype
#define FT_New_Library FT_New_Library_dylibloader_wrapper_freetype
#define FT_Done_Library FT_Done_Library_dylibloader_wrapper_freetype
#define FT_Set_Debug_Hook FT_Set_Debug_Hook_dylibloader_wrapper_freetype
#define FT_Add_Default_Modules FT_Add_Default_Modules_dylibloader_wrapper_freetype
#define FT_Get_TrueType_Engine_Type FT_Get_TrueType_Engine_Type_dylibloader_wrapper_freetype
#define FT_Library_SetLcdFilter FT_Library_SetLcdFilter_dylibloader_wrapper_freetype
#define FT_Library_SetLcdFilterWeights FT_Library_SetLcdFilterWeights_dylibloader_wrapper_freetype
#define FT_Library_SetLcdGeometry FT_Library_SetLcdGeometry_dylibloader_wrapper_freetype
#define FT_Get_Font_Format FT_Get_Font_Format_dylibloader_wrapper_freetype
#define FT_Get_X11_Font_Format FT_Get_X11_Font_Format_dylibloader_wrapper_freetype
extern const char *(*FT_Error_String_dylibloader_wrapper_freetype)(FT_Error);
extern FT_Error (*FT_Init_FreeType_dylibloader_wrapper_freetype)(FT_Library *);
extern FT_Error (*FT_Done_FreeType_dylibloader_wrapper_freetype)(FT_Library);
extern FT_Error (*FT_New_Face_dylibloader_wrapper_freetype)(FT_Library, const char *, FT_Long, FT_Face *);
extern FT_Error (*FT_New_Memory_Face_dylibloader_wrapper_freetype)(FT_Library, const FT_Byte *, FT_Long, FT_Long, FT_Face *);
extern FT_Error (*FT_Open_Face_dylibloader_wrapper_freetype)(FT_Library, const FT_Open_Args *, FT_Long, FT_Face *);
extern FT_Error (*FT_Attach_File_dylibloader_wrapper_freetype)(FT_Face, const char *);
extern FT_Error (*FT_Attach_Stream_dylibloader_wrapper_freetype)(FT_Face, const FT_Open_Args *);
extern FT_Error (*FT_Reference_Face_dylibloader_wrapper_freetype)(FT_Face);
extern FT_Error (*FT_Done_Face_dylibloader_wrapper_freetype)(FT_Face);
extern FT_Error (*FT_Select_Size_dylibloader_wrapper_freetype)(FT_Face, FT_Int);
extern FT_Error (*FT_Request_Size_dylibloader_wrapper_freetype)(FT_Face, FT_Size_Request);
extern FT_Error (*FT_Set_Char_Size_dylibloader_wrapper_freetype)(FT_Face, FT_F26Dot6, FT_F26Dot6, FT_UInt, FT_UInt);
extern FT_Error (*FT_Set_Pixel_Sizes_dylibloader_wrapper_freetype)(FT_Face, FT_UInt, FT_UInt);
extern FT_Error (*FT_Load_Glyph_dylibloader_wrapper_freetype)(FT_Face, FT_UInt, FT_Int32);
extern FT_Error (*FT_Load_Char_dylibloader_wrapper_freetype)(FT_Face, FT_ULong, FT_Int32);
extern void (*FT_Set_Transform_dylibloader_wrapper_freetype)(FT_Face, FT_Matrix *, FT_Vector *);
extern void (*FT_Get_Transform_dylibloader_wrapper_freetype)(FT_Face, FT_Matrix *, FT_Vector *);
extern FT_Error (*FT_Render_Glyph_dylibloader_wrapper_freetype)(FT_GlyphSlot, FT_Render_Mode);
extern FT_Error (*FT_Get_Kerning_dylibloader_wrapper_freetype)(FT_Face, FT_UInt, FT_UInt, FT_UInt, FT_Vector *);
extern FT_Error (*FT_Get_Track_Kerning_dylibloader_wrapper_freetype)(FT_Face, FT_Fixed, FT_Int, FT_Fixed *);
extern FT_Error (*FT_Select_Charmap_dylibloader_wrapper_freetype)(FT_Face, FT_Encoding);
extern FT_Error (*FT_Set_Charmap_dylibloader_wrapper_freetype)(FT_Face, FT_CharMap);
extern FT_Int (*FT_Get_Charmap_Index_dylibloader_wrapper_freetype)(FT_CharMap);
extern FT_UInt (*FT_Get_Char_Index_dylibloader_wrapper_freetype)(FT_Face, FT_ULong);
extern FT_ULong (*FT_Get_First_Char_dylibloader_wrapper_freetype)(FT_Face, FT_UInt *);
extern FT_ULong (*FT_Get_Next_Char_dylibloader_wrapper_freetype)(FT_Face, FT_ULong, FT_UInt *);
extern FT_Error (*FT_Face_Properties_dylibloader_wrapper_freetype)(FT_Face, FT_UInt, FT_Parameter *);
extern FT_UInt (*FT_Get_Name_Index_dylibloader_wrapper_freetype)(FT_Face, const FT_String *);
extern FT_Error (*FT_Get_Glyph_Name_dylibloader_wrapper_freetype)(FT_Face, FT_UInt, FT_Pointer, FT_UInt);
extern const char *(*FT_Get_Postscript_Name_dylibloader_wrapper_freetype)(FT_Face);
extern FT_Error (*FT_Get_SubGlyph_Info_dylibloader_wrapper_freetype)(FT_GlyphSlot, FT_UInt, FT_Int *, FT_UInt *, FT_Int *, FT_Int *, FT_Matrix *);
extern FT_UShort (*FT_Get_FSType_Flags_dylibloader_wrapper_freetype)(FT_Face);
extern FT_UInt (*FT_Face_GetCharVariantIndex_dylibloader_wrapper_freetype)(FT_Face, FT_ULong, FT_ULong);
extern FT_Int (*FT_Face_GetCharVariantIsDefault_dylibloader_wrapper_freetype)(FT_Face, FT_ULong, FT_ULong);
extern FT_UInt32 *(*FT_Face_GetVariantSelectors_dylibloader_wrapper_freetype)(FT_Face);
extern FT_UInt32 *(*FT_Face_GetVariantsOfChar_dylibloader_wrapper_freetype)(FT_Face, FT_ULong);
extern FT_UInt32 *(*FT_Face_GetCharsOfVariant_dylibloader_wrapper_freetype)(FT_Face, FT_ULong);
extern FT_Long (*FT_MulDiv_dylibloader_wrapper_freetype)(FT_Long, FT_Long, FT_Long);
extern FT_Long (*FT_MulFix_dylibloader_wrapper_freetype)(FT_Long, FT_Long);
extern FT_Long (*FT_DivFix_dylibloader_wrapper_freetype)(FT_Long, FT_Long);
extern FT_Fixed (*FT_RoundFix_dylibloader_wrapper_freetype)(FT_Fixed);
extern FT_Fixed (*FT_CeilFix_dylibloader_wrapper_freetype)(FT_Fixed);
extern FT_Fixed (*FT_FloorFix_dylibloader_wrapper_freetype)(FT_Fixed);
extern void (*FT_Vector_Transform_dylibloader_wrapper_freetype)(FT_Vector *, const FT_Matrix *);
extern void (*FT_Library_Version_dylibloader_wrapper_freetype)(FT_Library, FT_Int *, FT_Int *, FT_Int *);
extern FT_Bool (*FT_Face_CheckTrueTypePatents_dylibloader_wrapper_freetype)(FT_Face);
extern FT_Bool (*FT_Face_SetUnpatentedHinting_dylibloader_wrapper_freetype)(FT_Face, FT_Bool);
extern FT_Error (*FT_Outline_Decompose_dylibloader_wrapper_freetype)(FT_Outline *, const FT_Outline_Funcs *, void *);
extern FT_Error (*FT_Outline_New_dylibloader_wrapper_freetype)(FT_Library, FT_UInt, FT_Int, FT_Outline *);
extern FT_Error (*FT_Outline_Done_dylibloader_wrapper_freetype)(FT_Library, FT_Outline *);
extern FT_Error (*FT_Outline_Check_dylibloader_wrapper_freetype)(FT_Outline *);
extern void (*FT_Outline_Get_CBox_dylibloader_wrapper_freetype)(const FT_Outline *, FT_BBox *);
extern void (*FT_Outline_Translate_dylibloader_wrapper_freetype)(const FT_Outline *, FT_Pos, FT_Pos);
extern FT_Error (*FT_Outline_Copy_dylibloader_wrapper_freetype)(const FT_Outline *, FT_Outline *);
extern void (*FT_Outline_Transform_dylibloader_wrapper_freetype)(const FT_Outline *, const FT_Matrix *);
extern FT_Error (*FT_Outline_Embolden_dylibloader_wrapper_freetype)(FT_Outline *, FT_Pos);
extern FT_Error (*FT_Outline_EmboldenXY_dylibloader_wrapper_freetype)(FT_Outline *, FT_Pos, FT_Pos);
extern void (*FT_Outline_Reverse_dylibloader_wrapper_freetype)(FT_Outline *);
extern FT_Error (*FT_Outline_Get_Bitmap_dylibloader_wrapper_freetype)(FT_Library, FT_Outline *, const FT_Bitmap *);
extern FT_Error (*FT_Outline_Render_dylibloader_wrapper_freetype)(FT_Library, FT_Outline *, FT_Raster_Params *);
extern FT_Orientation (*FT_Outline_Get_Orientation_dylibloader_wrapper_freetype)(FT_Outline *);
extern void (*FT_GlyphSlot_Embolden_dylibloader_wrapper_freetype)(FT_GlyphSlot);
extern void (*FT_GlyphSlot_AdjustWeight_dylibloader_wrapper_freetype)(FT_GlyphSlot, FT_Fixed, FT_Fixed);
extern void (*FT_GlyphSlot_Oblique_dylibloader_wrapper_freetype)(FT_GlyphSlot);
extern void (*FT_GlyphSlot_Slant_dylibloader_wrapper_freetype)(FT_GlyphSlot, FT_Fixed, FT_Fixed);
extern void *(*FT_Get_Sfnt_Table_dylibloader_wrapper_freetype)(FT_Face, FT_Sfnt_Tag);
extern FT_Error (*FT_Load_Sfnt_Table_dylibloader_wrapper_freetype)(FT_Face, FT_ULong, FT_Long, FT_Byte *, FT_ULong *);
extern FT_Error (*FT_Sfnt_Table_Info_dylibloader_wrapper_freetype)(FT_Face, FT_UInt, FT_ULong *, FT_ULong *);
extern FT_ULong (*FT_Get_CMap_Language_ID_dylibloader_wrapper_freetype)(FT_CharMap);
extern FT_Long (*FT_Get_CMap_Format_dylibloader_wrapper_freetype)(FT_CharMap);
extern FT_Int (*FT_Has_PS_Glyph_Names_dylibloader_wrapper_freetype)(FT_Face);
extern FT_Error (*FT_Get_PS_Font_Info_dylibloader_wrapper_freetype)(FT_Face, PS_FontInfo);
extern FT_Error (*FT_Get_PS_Font_Private_dylibloader_wrapper_freetype)(FT_Face, PS_Private);
extern FT_Long (*FT_Get_PS_Font_Value_dylibloader_wrapper_freetype)(FT_Face, PS_Dict_Keys, FT_UInt, void *, FT_Long);
extern FT_Error (*FT_New_Glyph_dylibloader_wrapper_freetype)(FT_Library, FT_Glyph_Format, FT_Glyph *);
extern FT_Error (*FT_Get_Glyph_dylibloader_wrapper_freetype)(FT_GlyphSlot, FT_Glyph *);
extern FT_Error (*FT_Glyph_Copy_dylibloader_wrapper_freetype)(FT_Glyph, FT_Glyph *);
extern FT_Error (*FT_Glyph_Transform_dylibloader_wrapper_freetype)(FT_Glyph, const FT_Matrix *, const FT_Vector *);
extern void (*FT_Glyph_Get_CBox_dylibloader_wrapper_freetype)(FT_Glyph, FT_UInt, FT_BBox *);
extern FT_Error (*FT_Glyph_To_Bitmap_dylibloader_wrapper_freetype)(FT_Glyph *, FT_Render_Mode, const FT_Vector *, FT_Bool);
extern void (*FT_Done_Glyph_dylibloader_wrapper_freetype)(FT_Glyph);
extern void (*FT_Matrix_Multiply_dylibloader_wrapper_freetype)(const FT_Matrix *, FT_Matrix *);
extern FT_Error (*FT_Matrix_Invert_dylibloader_wrapper_freetype)(FT_Matrix *);
extern FT_Error (*FT_Add_Module_dylibloader_wrapper_freetype)(FT_Library, const FT_Module_Class *);
extern FT_Module (*FT_Get_Module_dylibloader_wrapper_freetype)(FT_Library, const char *);
extern FT_Error (*FT_Remove_Module_dylibloader_wrapper_freetype)(FT_Library, FT_Module);
extern FT_Error (*FT_Property_Set_dylibloader_wrapper_freetype)(FT_Library, const FT_String *, const FT_String *, const void *);
extern FT_Error (*FT_Property_Get_dylibloader_wrapper_freetype)(FT_Library, const FT_String *, const FT_String *, void *);
extern void (*FT_Set_Default_Properties_dylibloader_wrapper_freetype)(FT_Library);
extern FT_Error (*FT_Reference_Library_dylibloader_wrapper_freetype)(FT_Library);
extern FT_Error (*FT_New_Library_dylibloader_wrapper_freetype)(FT_Memory, FT_Library *);
extern FT_Error (*FT_Done_Library_dylibloader_wrapper_freetype)(FT_Library);
extern void (*FT_Set_Debug_Hook_dylibloader_wrapper_freetype)(FT_Library, FT_UInt, FT_DebugHook_Func);
extern void (*FT_Add_Default_Modules_dylibloader_wrapper_freetype)(FT_Library);
extern FT_TrueTypeEngineType (*FT_Get_TrueType_Engine_Type_dylibloader_wrapper_freetype)(FT_Library);
extern FT_Error (*FT_Library_SetLcdFilter_dylibloader_wrapper_freetype)(FT_Library, FT_LcdFilter);
extern FT_Error (*FT_Library_SetLcdFilterWeights_dylibloader_wrapper_freetype)(FT_Library, unsigned char *);
extern FT_Error (*FT_Library_SetLcdGeometry_dylibloader_wrapper_freetype)(FT_Library, FT_Vector [3]);
extern const char *(*FT_Get_Font_Format_dylibloader_wrapper_freetype)(FT_Face);
extern const char *(*FT_Get_X11_Font_Format_dylibloader_wrapper_freetype)(FT_Face);
int initialize_freetype(int verbose);
#ifdef __cplusplus
}
#endif
#endif
