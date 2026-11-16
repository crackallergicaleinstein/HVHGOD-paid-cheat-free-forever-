// FUN_180273390 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180273390 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180273390(longlong param_1,longlong *param_2,ulonglong param_3,float *param_4,
                  undefined4 param_5)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  PSRWLOCK SRWLock;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auVar12 [64];
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  ulonglong local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0 [16];
  longlong *local_190;
  undefined1 local_188 [16];
  longlong local_178;
  longlong local_168 [32];
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_1d8;
  local_1a8 = 0;
  if (DAT_180cad2e0 != 1) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  SRWLock = (PSRWLOCK)(param_1 + 0x40);
  local_1a0[8] = 1;
  local_1a0._0_8_ = SRWLock;
  local_1a0._9_7_ = 0;
  local_190 = param_2;
  AcquireSRWLockShared(SRWLock);
  local_188._0_8_ = 0;
  local_188._8_8_ = 0;
  local_178 = 0;
  uVar4 = FUN_18015bca0(0x6b40);
  FUN_18063aed0(uVar4,local_188._0_8_,local_188._8_8_ - local_188._0_8_);
  FUN_18027c140(local_188,uVar4,0,3);
  uVar5 = ((((((((param_3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_3 >> 8 & 0xff) *
                0x100000001b3 ^ param_3 >> 0x10 & 0xff) * 0x100000001b3 ^ param_3 >> 0x18 & 0xff) *
              0x100000001b3 ^ param_3 >> 0x20 & 0xff) * 0x100000001b3 ^ param_3 >> 0x28 & 0xff) *
            0x100000001b3 ^ param_3 >> 0x30 & 0xff) * 0x100000001b3 ^ param_3 >> 0x38) *
          0x100000001b3 & *(ulonglong *)(param_1 + 0x30);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar5 * 0x10);
  if (lVar8 == *(longlong *)(param_1 + 8)) {
LAB_180273516:
    lVar8 = 0;
  }
  else {
    uVar9 = *(ulonglong *)(lVar8 + 0x10);
    while (param_3 != uVar9) {
      if (lVar8 == *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar5 * 0x10)) goto LAB_180273516;
      lVar8 = *(longlong *)(lVar8 + 8);
      uVar9 = *(ulonglong *)(lVar8 + 0x10);
    }
  }
  if (((lVar8 == 0) || (lVar8 == *(longlong *)(param_1 + 8))) ||
     (lVar6 = *(longlong *)(lVar8 + 0x38), lVar6 == 0)) {
    *param_2 = local_188._0_8_;
    param_2[1] = local_188._8_8_;
    param_2[2] = local_178;
  }
  else {
    FUN_18063ab10(local_168,0,0x100);
    uVar9 = 0;
    uVar5 = *(ulonglong *)(lVar8 + 0x30);
    uVar10 = lVar6 + uVar5;
    if (uVar5 != uVar10) {
      lVar6 = *(longlong *)(lVar8 + 0x20);
      uVar7 = *(longlong *)(lVar8 + 0x28) - 1;
      lVar8 = 0;
      local_1b8 = lVar6;
      local_1b0 = uVar7;
      do {
        lVar11 = *(longlong *)(lVar6 + (uVar7 & uVar5) * 8);
        if (*(char *)(lVar11 + 0x23b8) != '\0') {
          auVar12 = ZEXT464(*(uint *)(lVar11 + 0x23b0));
          cVar2 = FUN_180232a20(param_4,*(uint *)(lVar11 + 0x23b0));
          if (cVar2 != '\0') {
            if (lVar8 == 0) {
              lVar8 = lVar11;
              if (DAT_180cad3c0 == '\0') break;
            }
            else {
              cVar2 = FUN_18026ba40(param_4,auVar12._0_8_,param_5);
              if (cVar2 != '\0') {
                lVar6 = local_1b8;
                uVar7 = local_1b0;
                if (uVar9 < 0x20) {
                  local_168[uVar9] = lVar11;
                  uVar9 = uVar9 + 1;
                }
                goto LAB_1802735bc;
              }
            }
          }
          lVar6 = local_1b8;
          uVar7 = local_1b0;
        }
LAB_1802735bc:
        lVar11 = lVar8;
        uVar5 = uVar5 + 1;
        lVar8 = lVar11;
      } while (uVar5 != uVar10);
      if (lVar11 != 0) {
        if (local_188._8_8_ == local_178) {
          FUN_18027bb40(local_188,local_188._8_8_,lVar11);
        }
        else {
          FUN_18063aed0(local_188._8_8_,lVar11,0x23c0);
          local_188._8_8_ = local_188._8_8_ + 0x23c0;
        }
      }
      if (uVar9 != 0) {
        fVar1 = *param_4 * 64.0 + 0.5;
        iVar3 = (int)fVar1;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        if (local_188._8_8_ == local_178) {
          FUN_18027bb40(local_188,local_188._8_8_,local_168[(ulonglong)(longlong)iVar3 % uVar9]);
        }
        else {
          FUN_18063aed0(fVar1,local_168[(ulonglong)(longlong)iVar3 % uVar9],0x23c0);
          local_188._8_8_ = local_188._8_8_ + 0x23c0;
        }
      }
    }
    *param_2 = local_188._0_8_;
    param_2[1] = local_188._8_8_;
    param_2[2] = local_178;
    SRWLock = (PSRWLOCK)local_1a0._0_8_;
  }
  local_178 = 0;
  local_188 = ZEXT816(0);
  ReleaseSRWLockShared(SRWLock);
}



