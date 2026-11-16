// FUN_18017b470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017b470 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18017b470(longlong *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_90;
  undefined1 (*pauStack_88) [16];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_58 [2];
  undefined1 auStack_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  local_b0 = *param_2;
  local_a8 = param_2[1];
  uStack_a0 = param_2[2];
  local_98 = param_2[3];
  local_80 = *param_3;
  local_78 = param_3[1];
  uStack_70 = param_3[2];
  local_68 = param_3[3];
  lVar7 = *param_4;
  pauVar6 = (undefined1 (*) [16])param_4[1];
  local_90 = lVar7;
  pauStack_88 = pauVar6;
  cVar4 = FUN_1800e6ca0(&local_b0,&local_80);
  if (cVar4 == '\0') {
    auVar9 = ZEXT1664(_DAT_18086d450);
    pauVar6 = pauStack_88;
    do {
      uVar5 = FUN_1800f3560(&local_b0);
      FUN_1800e69c0(uVar5,&local_d8);
      auVar8 = auVar9._0_16_;
      pauVar1 = *(undefined1 (**) [16])(lVar7 + 8);
      if (pauVar1 == *(undefined1 (**) [16])(lVar7 + 0x10)) {
        pauVar6 = (undefined1 (*) [16])FUN_18017bcb0(lVar7,pauVar6,&local_d8);
        auVar8 = auVar9._0_16_;
      }
      else if (pauVar6 == pauVar1) {
        *pauVar1 = (undefined1  [16])0x0;
        *(undefined8 *)pauVar1[1] = 0;
        *(undefined8 *)(pauVar1[1] + 8) = 0;
        *(ulonglong *)*pauVar1 = CONCAT71(uStack_d7,local_d8);
        *(undefined8 *)(*pauVar1 + 8) = uStack_d0;
        *(undefined8 *)pauVar1[1] = auStack_c8._0_8_;
        *(undefined8 *)(pauVar1[1] + 8) = auStack_c8._8_8_;
        local_d8 = 0;
        *(longlong *)(lVar7 + 8) = *(longlong *)(lVar7 + 8) + 0x20;
        auStack_c8 = auVar8;
      }
      else {
        local_58[0] = CONCAT71(uStack_d7,local_d8);
        local_58[1] = uStack_d0;
        auStack_48 = auStack_c8;
        local_d8 = 0;
        uVar5 = *(undefined8 *)(pauVar1[-2] + 8);
        uVar2 = *(undefined8 *)pauVar1[-1];
        uVar3 = *(undefined8 *)(pauVar1[-1] + 8);
        *(undefined8 *)*pauVar1 = *(undefined8 *)pauVar1[-2];
        *(undefined8 *)(*pauVar1 + 8) = uVar5;
        *(undefined8 *)pauVar1[1] = uVar2;
        *(undefined8 *)(pauVar1[1] + 8) = uVar3;
        pauVar1[-2][0] = 0;
        *(undefined8 *)pauVar1[-1] = 0;
        *(undefined8 *)(pauVar1[-1] + 8) = 0xf;
        *(longlong *)(lVar7 + 8) = *(longlong *)(lVar7 + 8) + 0x20;
        auVar9 = ZEXT1664(auVar8);
        auStack_c8 = auVar8;
        local_60 = lVar7;
        FUN_18017bc30(pauVar6);
        auVar8 = auVar9._0_16_;
        if (pauVar6 != (undefined1 (*) [16])local_58) {
          FUN_18015c010(pauVar6);
          *(ulonglong *)*pauVar6 = local_58[0];
          *(ulonglong *)(*pauVar6 + 8) = local_58[1];
          *(undefined8 *)pauVar6[1] = auStack_48._0_8_;
          *(undefined8 *)(pauVar6[1] + 8) = auStack_48._8_8_;
          auVar8 = auVar9._0_16_;
          local_58[0] = local_58[0] & 0xffffffffffffff00;
          auStack_48 = auVar8;
        }
        auVar9 = ZEXT1664(auVar8);
        FUN_18015c010(local_58);
        auVar8 = auVar9._0_16_;
      }
      pauVar6 = pauVar6 + 2;
      auVar9 = ZEXT1664(auVar8);
      pauStack_88 = pauVar6;
      FUN_18015c010(&local_d8);
      FUN_1800f33e0(&local_b0);
      cVar4 = FUN_1800e6ca0(&local_b0,&local_80);
    } while (cVar4 == '\0');
    lVar7 = local_90;
    pauVar6 = pauStack_88;
  }
  *param_1 = lVar7;
  param_1[1] = (longlong)pauVar6;
}



