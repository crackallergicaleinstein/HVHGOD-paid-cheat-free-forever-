// FUN_1802fbbf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802fbbf0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802fbbf0(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  short sVar3;
  longlong lVar4;
  undefined1 auVar5 [64];
  float fVar6;
  undefined1 auVar7 [64];
  float fVar8;
  float fVar9;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_188 [152];
  undefined4 local_f0;
  float local_dc;
  char local_cd;
  char local_80;
  undefined8 local_78;
  float local_70;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_1d8;
  local_78 = DAT_180b8e118;
  uVar1 = local_78;
  if (DAT_180b8e110 != '\0') {
    local_78._0_4_ = (float)DAT_180b8e118;
    fVar8 = (float)local_78;
    local_78 = uVar1;
    sVar3 = thunk_FUN_180624430(DAT_180b8e118 & 0xffffffff);
    if (sVar3 < 1) {
      fVar9 = local_78._4_4_;
      sVar3 = thunk_FUN_180624430(local_78._4_4_);
      if (sVar3 < 1) {
        auVar7 = ZEXT464(DAT_180b8e120);
        sVar3 = thunk_FUN_180624430(DAT_180b8e120);
        if (((sVar3 < 1) && (fVar6 = 0.0, auVar7._0_4_ <= 0.0)) &&
           ((DAT_180b8e111 == '\0' || ((DAT_180b8e18c & 1) == 0)))) {
          lVar4 = FUN_1802fbb20(&DAT_180c6f0a8,0x58e37709);
          if (lVar4 == 0) {
            auVar5 = ZEXT464(0x7fc00000);
          }
          else {
            auVar5 = ZEXT464(*(uint *)(lVar4 + 0x58));
          }
          sVar3 = thunk_FUN_180624430(auVar5._0_8_);
          if ((((sVar3 < 1) && (fVar6 < auVar5._0_4_)) &&
              (lVar4 = FUN_1803032c0(param_1,param_2), *(char *)(lVar4 + 0x48) != '\0')) &&
             (cVar2 = FUN_180303860(1), cVar2 != '\0')) {
            local_78 = CONCAT44(fVar9 * 0.015625 + DAT_180b8e140,fVar8 * 0.015625 + DAT_180b8e13c);
            local_70 = (auVar7._0_4_ * 0.015625 + DAT_180b8e144) -
                       (auVar5._0_4_ * 0.5 * 0.015625 * 0.015625 + 2.0);
            local_1a0 = *(undefined8 *)(lVar4 + 0x38);
            local_1b0 = lVar4 + 0x24;
            local_1b8 = lVar4 + 0x18;
            local_1a8 = *(undefined8 *)(lVar4 + 0x30);
            FUN_180418670(local_1b0,local_188,&DAT_180b8e13c,&local_78);
            if (((local_80 != '\0') && (local_cd == '\0')) &&
               (((sVar3 = thunk_FUN_180624430(local_dc), sVar3 < 1 &&
                 ((fVar6 <= local_dc && (local_dc <= 1.0)))) && (local_dc < 1.0)))) {
              thunk_FUN_180624430(local_f0);
            }
          }
        }
      }
    }
  }
}



