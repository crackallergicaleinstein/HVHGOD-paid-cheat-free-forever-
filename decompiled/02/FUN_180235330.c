// FUN_180235330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180235330 */

undefined8 FUN_180235330(char *param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  ULONGLONG UVar4;
  longlong lVar5;
  undefined8 local_28;
  
  if ((param_1[2] != '\0') && (cVar1 = FUN_1802351c0(param_2), cVar1 != '\0')) {
    return 1;
  }
  if (*param_1 == '\0') {
    return 0;
  }
  iVar3 = DAT_180c643c0;
  if (DAT_180c643c0 == 0) {
    UVar4 = GetTickCount64();
    if (DAT_180c643b8 <= UVar4) {
      local_28 = &DAT_1808edb20;
      iVar3 = FUN_1805f68d0(&DAT_1808edb20);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808edb6c == 0x7fffffff) {
        DAT_1808edb6c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c643c0 == 0) && (DAT_180c643b8 <= UVar4)) {
        DAT_180c643c0 = FUN_1804174b0("C_CSPlayerPawnBase",0x6a6f758b);
        if (DAT_180c643c0 == 0) {
          DAT_180c643b8 = UVar4 + 1000;
        }
        else {
          DAT_180c643b8 = 0xffffffffffffffff;
        }
      }
      iVar3 = DAT_180c643c0;
      FUN_1805f68fc(&DAT_1808edb20);
      if (iVar3 != 0) goto LAB_180235418;
    }
    local_28._0_5_ = (uint5)(uint)(float)local_28;
    goto LAB_180235479;
  }
LAB_180235418:
  lVar5 = FUN_18017ea70();
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  if (iVar3 + param_2 == 0) {
LAB_18023545c:
    local_28._0_5_ = (uint5)(uint)(float)local_28;
  }
  else {
    local_28 = (undefined *)((ulonglong)local_28 & 0xffffffff00000000);
    cVar1 = FUN_1804514f0(&local_28,iVar3 + param_2,4);
    if (cVar1 == '\0') goto LAB_18023545c;
    local_28._0_5_ = CONCAT14(1,(float)local_28);
  }
  lVar5 = FUN_18017ea70();
  if (*(int *)(lVar5 + 4) != 0) {
    *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
  }
LAB_180235479:
  if ((char)((ulonglong)local_28 >> 0x20) != '\0') {
    sVar2 = thunk_FUN_180624430((ulonglong)local_28 & 0xffffffff);
    if ((sVar2 < 1) && ((float)local_28 <= 0.2)) {
      return 0;
    }
  }
  return 1;
}



