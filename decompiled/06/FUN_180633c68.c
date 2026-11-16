// FUN_180633c68 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180633c68 */

/* Library Function - Single Match
    int __cdecl truncate_ctrl_z_if_present(int)
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

int __cdecl truncate_ctrl_z_if_present(int param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  short local_res8 [4];
  
  bVar1 = *(byte *)((&DAT_180bb2130)[(longlong)param_1 >> 6] + 0x38 +
                   (ulonglong)(param_1 & 0x3f) * 0x48);
  if (((bVar1 & 0x48) == 0) && ((char)bVar1 < '\0')) {
    lVar3 = FUN_1806262c4(param_1,0xffffffffffffffff,2);
    if (lVar3 == -1) {
      piVar4 = (int *)FUN_18060fddc();
      if (*piVar4 == 0x83) goto LAB_180633d17;
    }
    else {
      local_res8[0] = 0;
      iVar2 = FUN_180626c00(param_1,local_res8,1);
      if ((iVar2 == 0) && (local_res8[0] == 0x1a)) {
        iVar2 = FUN_180635b50(param_1,lVar3);
        if (iVar2 == -1) goto LAB_180633cca;
      }
      lVar3 = FUN_1806262c4(param_1,0,0);
      if (lVar3 != -1) goto LAB_180633d17;
    }
LAB_180633cca:
    piVar4 = (int *)FUN_18060fe00();
    iVar2 = *piVar4;
  }
  else {
LAB_180633d17:
    iVar2 = 0;
  }
  return iVar2;
}



