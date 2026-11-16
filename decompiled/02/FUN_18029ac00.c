// FUN_18029ac00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029ac00 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined * FUN_18029ac00(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong lStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  
  if (param_1 != 0) {
    uVar8 = 0xffffffffffffffff;
    iVar4 = DAT_180c6e2a8;
    if (DAT_180c6e2a8 == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c6e2a0) {
        iVar4 = 0;
      }
      else {
        local_68 = &DAT_1808f3ba0;
        iVar4 = FUN_1805f68d0(&DAT_1808f3ba0);
        if (iVar4 != 0) goto LAB_18029af20;
        if (DAT_1808f3bec == 0x7fffffff) {
          DAT_1808f3bec = 0x7ffffffe;
          goto LAB_18029af35;
        }
        if ((DAT_180c6e2a8 == 0) && (DAT_180c6e2a0 <= UVar6)) {
          DAT_180c6e2a8 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
          if (DAT_180c6e2a8 == 0) {
            DAT_180c6e2a0 = UVar6 + 1000;
          }
          else {
            DAT_180c6e2a0 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c6e2a8;
        FUN_1805f68fc(&DAT_1808f3ba0);
      }
    }
    iVar5 = DAT_180c6e2ac;
    if (DAT_180c6e2ac == 0) {
      UVar6 = GetTickCount64();
      if (UVar6 < DAT_180c6e298) {
        iVar5 = 0;
      }
      else {
        local_68 = &DAT_1808f3b50;
        iVar5 = FUN_1805f68d0(&DAT_1808f3b50);
        if (iVar5 != 0) {
LAB_18029af20:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808f3b9c == 0x7fffffff) {
          DAT_1808f3b9c = 0x7ffffffe;
LAB_18029af35:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6e2ac == 0) && (DAT_180c6e298 <= UVar6)) {
          DAT_180c6e2ac = FUN_1804174b0("C_BaseEntity",0x84cdad2);
          if (DAT_180c6e2ac == 0) {
            uVar8 = UVar6 + 1000;
          }
          DAT_180c6e298 = uVar8;
        }
        iVar5 = DAT_180c6e2ac;
        FUN_1805f68fc(&DAT_1808f3b50);
      }
    }
    if ((iVar4 != 0) && (iVar5 != 0)) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      local_50 = _DAT_180bb8890;
      lStack_48 = lRam0000000180bb8898;
      lStack_40 = lRam0000000180bb88a0;
      uStack_38 = uRam0000000180bb88a8;
      local_60 = _DAT_180bb88b0;
      uStack_58 = uRam0000000180bb88b8;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      if (iVar4 + param_1 == 0) {
        bVar1 = false;
      }
      else {
        local_68 = (undefined *)((ulonglong)local_68 & 0xffffffff00000000);
        cVar3 = FUN_1804514f0(&local_68,iVar4 + param_1,4);
        if (cVar3 == '\0') {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
      }
      iVar4 = (int)local_68;
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      if (iVar5 + param_1 == 0) {
        bVar2 = false;
      }
      else {
        local_68 = (undefined *)((ulonglong)local_68 & 0xffffffff00000000);
        cVar3 = FUN_1804514f0(&local_68,iVar5 + param_1,4);
        if (cVar3 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      iVar5 = (int)local_68;
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      if ((bVar1) && (bVar2)) {
        if ((char)uStack_58 != '\0') {
          lStack_40 = lStack_48;
        }
        if ((param_1 != lStack_40) && (param_1 != lStack_48)) {
          if (((char)((ulonglong)uStack_58 >> 8) == '\0') ||
             ((int)((ulonglong)local_60 >> 0x20) != iVar4)) {
            if (iVar5 < 1) {
              return &DAT_180cb2ba8;
            }
            return &DAT_180cb2b28;
          }
          if (iVar5 < 1) {
            return &DAT_180cb2ca8;
          }
          return &DAT_180cb2c28;
        }
        if (iVar5 < 1) {
          return &DAT_180cb2da8;
        }
        if (DAT_180b0cc88 == '\0') {
          return (undefined *)0x0;
        }
        return &DAT_180cb2d28;
      }
    }
  }
  return (undefined *)0x0;
}



