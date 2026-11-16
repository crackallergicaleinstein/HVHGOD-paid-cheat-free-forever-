// FUN_1804512c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804512c0 */

ulonglong FUN_1804512c0(uint param_1,char param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if ((param_1 & 0x101) != 0) goto switchD_18045132d_caseD_3;
  param_1 = param_1 & 0xff;
  if (param_2 == '\x02') {
    in_RAX = (ulonglong)(param_1 - 0x10);
    if (param_1 - 0x10 < 0x31) {
      uVar1 = 0x1000000010001;
LAB_1804512e2:
      if ((uVar1 >> (in_RAX & 0x3f) & 1) != 0) goto switchD_18045132d_caseD_2;
    }
  }
  else {
    if (param_2 != '\x01') {
      in_RAX = 0;
      switch(param_1) {
      case 2:
      case 4:
      case 8:
      case 0x20:
      case 0x40:
      case 0x80:
        goto switchD_18045132d_caseD_2;
      default:
        goto switchD_18045132d_caseD_3;
      }
    }
    in_RAX = (ulonglong)(param_1 - 4);
    if (param_1 - 4 < 0x3d) {
      uVar1 = 0x1000000000000011;
      goto LAB_1804512e2;
    }
  }
  if (param_1 != 0x80) {
switchD_18045132d_caseD_3:
    return in_RAX & 0xffffffffffffff00;
  }
switchD_18045132d_caseD_2:
  return CONCAT71((int7)(in_RAX >> 8),1);
}



