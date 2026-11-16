// FUN_180306f60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180306f60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180306f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  ULONGLONG UVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (DAT_180cc8b68 != '\0') {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    uVar3 = _DAT_180bb88b0;
    uVar4 = uRam0000000180bb88b8;
    uVar5 = _DAT_180bb8890;
    lVar6 = lRam0000000180bb8898;
    uVar8 = uRam0000000180bb88a0;
    uVar9 = uRam0000000180bb88a8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    iVar1 = DAT_180c6f370;
    in_RAX = extraout_RAX;
    if ((lVar6 != 0) && (in_RAX = 0, (char)uVar4 != '\0')) {
      if (DAT_180c6f370 == 0) {
        lVar7 = lVar6;
        UVar2 = GetTickCount64();
        if (DAT_180c6f368 <= UVar2) {
          iVar1 = FUN_1805f68d0(&DAT_1808ff880);
          if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808ff8cc == 0x7fffffff) {
            DAT_1808ff8cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c6f370 == 0) && (DAT_180c6f368 <= UVar2)) {
            DAT_180c6f370 =
                 FUN_1804174b0("C_BaseEntity",0x5600aa92,param_3,param_4,uVar3,uVar4,uVar5,lVar7,
                               uVar8,uVar9);
            if (DAT_180c6f370 == 0) {
              DAT_180c6f368 = UVar2 + 1000;
            }
            else {
              DAT_180c6f368 = 0xffffffffffffffff;
            }
          }
          iVar1 = DAT_180c6f370;
          FUN_1805f68fc(&DAT_1808ff880);
        }
      }
      in_RAX = (ulonglong)iVar1;
      if ((*(char *)(in_RAX + lVar6) != '\t') && (*(char *)(in_RAX + lVar6) != '\a')) {
        return CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



