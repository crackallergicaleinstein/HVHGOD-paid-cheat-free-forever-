// FUN_18061055c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061055c */

ulonglong FUN_18061055c(longlong *param_1,ulonglong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong lVar3;
  
  if ((((param_3 != 2) &&
       (in_RAX = (ulonglong)*(uint *)((longlong)param_1 + 0x14),
       (*(uint *)((longlong)param_1 + 0x14) & 0x4c0) != 0)) &&
      (in_RAX = (ulonglong)*(uint *)((longlong)param_1 + 0x14),
      (*(uint *)((longlong)param_1 + 0x14) & 6) == 0)) && (0 < (int)param_1[2])) {
    uVar1 = *(uint *)(param_1 + 3);
    in_RAX = (longlong)(int)uVar1 >> 6;
    if ((-1 < *(char *)((&DAT_180bb2130)[in_RAX] + 0x38 + (ulonglong)(uVar1 & 0x3f) * 0x48)) &&
       (*(char *)((&DAT_180bb2130)[in_RAX] + 0x39 + (ulonglong)(uVar1 & 0x3f) * 0x48) == '\0')) {
      if (param_3 == 0) {
        in_RAX = FUN_1806262c4(uVar1,0,1);
        if ((longlong)in_RAX < 0) goto LAB_180610644;
        lVar3 = in_RAX - (longlong)(int)param_1[2];
        in_RAX = param_2 - lVar3;
        iVar2 = (int)((longlong)param_2 >> 0x3f);
        if ((-iVar2 != -(int)(lVar3 >> 0x3f)) && (-(uint)(0x7fffffffffffffff < in_RAX) != iVar2))
        goto LAB_180610644;
        param_2 = in_RAX;
      }
      if ((param_1[1] - *param_1 <= (longlong)param_2) &&
         ((longlong)param_2 <= (longlong)(int)param_1[2])) {
        *param_1 = *param_1 + param_2;
        *(int *)(param_1 + 2) = (int)param_1[2] - (int)param_2;
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
LAB_180610644:
  return in_RAX & 0xffffffffffffff00;
}



