// FUN_1802351c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802351c0 */

longlong FUN_1802351c0(longlong param_1)

{
  char cVar1;
  int iVar2;
  ULONGLONG UVar3;
  longlong lVar4;
  uint7 uVar5;
  undefined8 local_18;
  
  iVar2 = DAT_180c643c4;
  if (DAT_180c643c4 == 0) {
    UVar3 = GetTickCount64();
    if (DAT_180c643b0 <= UVar3) {
      local_18 = &DAT_1808edbc0;
      iVar2 = FUN_1805f68d0(&DAT_1808edbc0);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808edc0c == 0x7fffffff) {
        DAT_1808edc0c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c643c4 == 0) && (DAT_180c643b0 <= UVar3)) {
        DAT_180c643c4 = FUN_1804174b0("C_BaseEntity",0xa4a37590);
        if (DAT_180c643c4 == 0) {
          DAT_180c643b0 = UVar3 + 1000;
        }
        else {
          DAT_180c643b0 = 0xffffffffffffffff;
        }
      }
      iVar2 = DAT_180c643c4;
      FUN_1805f68fc(&DAT_1808edbc0);
      if (iVar2 != 0) goto LAB_180235280;
    }
    local_18._0_5_ = (uint5)(uint)local_18;
    goto LAB_1802352db;
  }
LAB_180235280:
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  if (iVar2 + param_1 == 0) {
LAB_1802352be:
    local_18._0_5_ = (uint5)(uint)local_18;
  }
  else {
    local_18 = (undefined *)((ulonglong)local_18 & 0xffffffff00000000);
    cVar1 = FUN_1804514f0(&local_18,iVar2 + param_1,4);
    if (cVar1 == '\0') goto LAB_1802352be;
    local_18._0_5_ = CONCAT14(1,(uint)local_18);
  }
  lVar4 = FUN_18017ea70();
  if (*(int *)(lVar4 + 4) != 0) {
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
  }
LAB_1802352db:
  uVar5 = (uint7)((ulonglong)local_18 >> 0x28);
  if (((char)((ulonglong)local_18 >> 0x20) == '\0') || (((ulonglong)local_18 & 1) == 0)) {
    lVar4 = CONCAT71(uVar5,1);
  }
  else {
    lVar4 = (ulonglong)uVar5 << 8;
  }
  return lVar4;
}



