// FUN_18045f360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045f360 */

ulonglong FUN_18045f360(ulonglong param_1)

{
  ulonglong in_RAX;
  
  if ((DAT_180c62c58 != (ulonglong *)0x0) && (param_1 != 0)) {
    if ((DAT_180c62c70 == 0) ||
       ((param_1 < DAT_180c62c70 || (in_RAX = DAT_180c62c70 + 0x69d8, in_RAX <= param_1)))) {
      if ((DAT_180c62c68 == 0) ||
         (((in_RAX = DAT_180c62c50, DAT_180c62c50 == 0 || (param_1 < DAT_180c62c68)) ||
          (in_RAX = DAT_180c62c50 + DAT_180c62c68, in_RAX <= param_1)))) goto LAB_18045f3e3;
      param_1 = param_1 - DAT_180c62c68 | 0x8000000000000000;
    }
    else {
      param_1 = param_1 - DAT_180c62c70;
    }
    for (in_RAX = *DAT_180c62c58; in_RAX != DAT_180c62c58[1]; in_RAX = in_RAX + 0x68) {
      if (*(ulonglong *)(in_RAX + 0x20) == param_1) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
LAB_18045f3e3:
  return in_RAX & 0xffffffffffffff00;
}



