// FUN_1802cb510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802cb510 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802cb510(void)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined1 in_ZMM0 [64];
  undefined1 auVar9 [64];
  float fVar10;
  undefined1 auStack_c8 [32];
  float local_a8 [4];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined4 local_84;
  undefined *local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [16];
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  auVar9 = ZEXT1664(in_ZMM0._0_16_);
  sVar3 = thunk_FUN_180624430();
  if ((sVar3 < 1) && (fVar10 = 0.0, 0.0 < auVar9._0_4_)) {
    local_98 = ZEXT816(0x1808fd888);
    iVar4 = FUN_1805f68d8(&DAT_1808fd888);
    local_98[8] = iVar4 == 0;
    if ((iVar4 == 0) && (cVar2 = FUN_1802cb310(), cVar2 != '\0')) {
      puVar8 = &DAT_1808fd868;
      do {
        plVar1 = (longlong *)*puVar8;
        local_58 = (undefined1  [16])0x0;
        local_48 = 0;
        (**(code **)(*plVar1 + 200))(plVar1,local_58,0x100);
        if (local_58._8_4_ == 0) {
          local_78 = (undefined1  [16])0x0;
          local_68 = 0;
          local_60 = 0;
          local_88 = 0x40;
          local_84 = 0x2b110;
          local_80 = &DAT_1807d4e50;
          local_a8[2] = 1.0;
          local_a8[0] = fVar10;
          local_a8[1] = auVar9._0_4_ / 100.0;
          pfVar6 = local_a8;
          if (fVar10 <= local_a8[1]) {
            pfVar6 = local_a8 + 1;
          }
          pfVar7 = local_a8 + 2;
          if (local_a8[1] <= 1.0) {
            pfVar7 = pfVar6;
          }
          iVar5 = (**(code **)(*plVar1 + 0x60))(plVar1,*pfVar7,0);
          if ((-1 < iVar5) &&
             (iVar5 = (**(code **)(*plVar1 + 0xa8))(plVar1,&local_88,0), -1 < iVar5)) {
            (**(code **)(*plVar1 + 0x98))(plVar1,0,0);
          }
          break;
        }
        puVar8 = puVar8 + 1;
      } while (puVar8 != (undefined8 *)&DAT_1808fd888);
    }
    if (iVar4 == 0) {
      FUN_1805f68fc(&DAT_1808fd888);
    }
  }
}



