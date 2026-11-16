// FUN_1802ffb50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ffb50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802ffb50(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ULONGLONG UVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  DAT_180b8fc1e = 0;
  if (DAT_180b8fbfc == '\0') {
    _DAT_180b8fc1c = 0;
  }
  DAT_180b8fbfc = 0;
  puVar3 = &DAT_180b8e174;
  if (DAT_180b8e111 == '\0') {
    puVar3 = &DAT_180b8e118;
  }
  DAT_180b8fc00 = *puVar3;
  _DAT_180b8fc08 = *(undefined4 *)(puVar3 + 1);
  cVar1 = FUN_1802ff9f0();
  lVar8 = 0;
  if (param_2 != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      lVar8 = *(longlong *)(param_2 + 0x40) + 0x10;
    }
  }
  local_58 = 0x746e6175715f7673;
  uStack_50 = 0x65766f6d5f657a69;
  local_48 = 0x706e695f746e656d;
  uStack_40 = 0x7475;
  pbVar5 = (byte *)&local_58;
  uVar7 = 0x811c9dc5;
  uVar9 = 0x811c9dc5;
  uVar6 = local_58;
  do {
    pbVar5 = pbVar5 + 1;
    uVar9 = ((int)(char)uVar6 ^ uVar9) * 0x1000193;
    uVar6 = (ulonglong)*pbVar5;
  } while (*pbVar5 != 0);
  FUN_1802fbb20(&DAT_180c6f140,uVar9);
  local_58 = 0x69746275735f7673;
  uStack_50 = 0x6d65766f6d5f6b63;
  local_48 = 0x776569765f746e65;
  uStack_40 = 0x73656c676e615f;
  pbVar5 = (byte *)&local_58;
  uVar6 = local_58;
  do {
    pbVar5 = pbVar5 + 1;
    uVar7 = ((int)(char)uVar6 ^ uVar7) * 0x1000193;
    uVar6 = (ulonglong)*pbVar5;
  } while (*pbVar5 != 0);
  FUN_1802fbb20(&DAT_180c6f158,uVar7);
  if (((((cVar1 != '\0') && (DAT_180b8fffc == '\0')) && (DAT_180b90028 == '\0')) &&
      ((DAT_1808fedf1 == '\0' && (DAT_180b900c0 == '\0')))) &&
     ((DAT_180b8fc30 == '\0' && ((DAT_180b8fe80 == '\0' && (lVar8 != 0)))))) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    lVar8 = lRam0000000180bb8898;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    if (lVar8 != 0) {
      iVar2 = DAT_180c6f170;
      if (DAT_180c6f170 == 0) {
        UVar4 = GetTickCount64();
        if (UVar4 < DAT_180c6f178) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_1805f68d0(&DAT_1808fef50);
          if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808fef9c == 0x7fffffff) {
            DAT_1808fef9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c6f170 == 0) && (DAT_180c6f178 <= UVar4)) {
            DAT_180c6f170 = FUN_1804174b0("C_BaseEntity",0x5600aa92);
            if (DAT_180c6f170 == 0) {
              DAT_180c6f178 = UVar4 + 1000;
            }
            else {
              DAT_180c6f178 = 0xffffffffffffffff;
            }
          }
          iVar2 = DAT_180c6f170;
          FUN_1805f68fc(&DAT_1808fef50);
        }
      }
      cVar1 = *(char *)(iVar2 + lVar8);
      if (((cVar1 != '\t') && (cVar1 != '\a')) && (DAT_180b8e622 == '\0')) {
        if ((((DAT_180cad2e0 == 1) && (DAT_180c7e1f0 != '\0')) &&
            ((DAT_180b8e620 != '\0' && (DAT_180b8e621 != '\0')))) ||
           ((DAT_180b8f98d != '\0' || (fVar10 = (float)FUN_1803074b0(), 0.0 <= fVar10)))) {
          cVar1 = '\x01';
        }
        else {
          cVar1 = '\0';
        }
        if ((DAT_180b8e114 & 1) == 0) {
          if (cVar1 == '\0') {
            if (DAT_180b8fc1f == '\0') {
              if (0 < DAT_180b8fc20) {
                DAT_180b8fc20 = DAT_180b8fc20 + -1;
              }
            }
            else {
              DAT_180b8fc20 = 3;
              if ((DAT_180b0dfd8 & 0x618) != 0) {
                DAT_180b8fc20 = 0;
                _DAT_180b8fbe8 = 0;
                DAT_180b8fbf0 = 0;
              }
            }
            DAT_180b8fc1f = cVar1;
            cVar1 = FUN_180306f60();
            if (cVar1 == '\0') {
              FUN_180300180(&DAT_180b8fbe0,param_2);
            }
          }
          else {
            DAT_180b8fc20 = 0;
            DAT_180b8fc1f = cVar1;
          }
        }
      }
    }
  }
  return;
}



