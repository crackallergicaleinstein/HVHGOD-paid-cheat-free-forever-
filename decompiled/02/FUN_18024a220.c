// FUN_18024a220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18024a220 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18024a220(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  ULONGLONG UVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *(undefined1 *)(param_1 + 0xcc) = 0;
  if (param_2 != 0) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    puVar4 = _DAT_180bb88b0;
    uVar5 = uRam0000000180bb88b8;
    uVar6 = _DAT_180bb8890;
    lVar7 = lRam0000000180bb8898;
    uVar9 = uRam0000000180bb88a0;
    uVar10 = uRam0000000180bb88a8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    iVar2 = DAT_180c64568;
    if ((lVar7 != 0) && ((char)uVar5 != '\0')) {
      lVar8 = lVar7;
      if ((DAT_180c64568 == 0) && (UVar3 = GetTickCount64(), DAT_180c64548 <= UVar3)) {
        puVar4 = &DAT_1808ee580;
        iVar2 = FUN_1805f68d0(&DAT_1808ee580);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808ee5cc == 0x7fffffff) {
          DAT_1808ee5cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c64568 == 0) && (DAT_180c64548 <= UVar3)) {
          DAT_180c64568 = FUN_1804174b0("C_BaseEntity",0x5600aa92);
          if (DAT_180c64568 == 0) {
            DAT_180c64548 = UVar3 + 1000;
          }
          else {
            DAT_180c64548 = 0xffffffffffffffff;
          }
        }
        iVar2 = DAT_180c64568;
        FUN_1805f68fc(&DAT_1808ee580);
      }
      cVar1 = *(char *)(iVar2 + lVar7);
      if ((cVar1 != '\t') && (cVar1 != '\a')) {
        FUN_18024ab10(param_1,param_2,cVar1,param_4,puVar4,uVar5,uVar6,lVar8,uVar9,uVar10);
      }
    }
  }
  return;
}



