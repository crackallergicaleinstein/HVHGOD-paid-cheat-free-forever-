// FUN_1801d8910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d8910 */

ulonglong FUN_1801d8910(uint *param_1,uint *param_2)

{
  size_t _Size;
  int iVar1;
  undefined4 extraout_var;
  size_t sVar2;
  uint *_Buf1;
  uint *_Buf2;
  
  sVar2 = (size_t)*param_2;
  if ((((*param_1 == *param_2) && ((float)param_1[1] == (float)param_2[1])) &&
      (sVar2 = (size_t)param_2[2], param_1[2] == param_2[2])) &&
     ((sVar2 = 0, (char)param_1[3] == (char)param_2[3] &&
      (sVar2 = (size_t)param_2[4], param_1[4] == param_2[4])))) {
    sVar2 = *(size_t *)(param_2 + 10);
    _Buf2 = param_2 + 6;
    _Buf1 = param_1 + 6;
    if (0xf < *(ulonglong *)(param_2 + 0xc)) {
      _Buf2 = *(uint **)_Buf2;
    }
    _Size = *(size_t *)(param_1 + 10);
    if (0xf < *(ulonglong *)(param_1 + 0xc)) {
      _Buf1 = *(uint **)_Buf1;
    }
    if (_Size == sVar2) {
      if (_Size != 0) {
        iVar1 = memcmp(_Buf1,_Buf2,_Size);
        sVar2 = CONCAT44(extraout_var,iVar1);
        if (iVar1 != 0) goto LAB_1801d8a5a;
      }
      sVar2 = 0;
      if ((((((char)param_1[0xe] == (char)param_2[0xe]) &&
            (sVar2 = (size_t)param_2[0xf], param_1[0xf] == param_2[0xf])) &&
           ((sVar2 = (size_t)param_2[0x10], param_1[0x10] == param_2[0x10] &&
            (((sVar2 = (size_t)param_2[0x11], param_1[0x11] == param_2[0x11] &&
              (sVar2 = FUN_18019c200(param_1 + 0x12,param_2 + 0x12), (char)sVar2 != '\0')) &&
             (sVar2 = (size_t)param_2[0x35], param_1[0x35] == param_2[0x35])))))) &&
          ((sVar2 = (size_t)param_2[0x36], param_1[0x36] == param_2[0x36] &&
           ((float)param_1[0x37] == (float)param_2[0x37])))) &&
         (((float)param_1[0x38] == (float)param_2[0x38] &&
          (((float)param_1[0x39] == (float)param_2[0x39] &&
           (sVar2 = 0, (char)param_1[0x3a] == (char)param_2[0x3a])))))) {
        return 1;
      }
    }
  }
LAB_1801d8a5a:
  return sVar2 & 0xffffffffffffff00;
}



