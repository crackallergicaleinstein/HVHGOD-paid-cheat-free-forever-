// FUN_1802c1520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c1520 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802c1520(ulonglong *param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined1 auStack_58 [16];
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  if ((param_1 != param_2) && (puVar6 = param_1 + 5, puVar6 != param_2)) {
    auVar8 = ZEXT1664(_DAT_18086d450);
    do {
      local_88 = *puVar6;
      uStack_80 = puVar6[1];
      uStack_78 = *(ulonglong *)*(undefined1 (*) [16])(puVar6 + 2);
      uStack_70 = puVar6[3];
      auStack_58 = *(undefined1 (*) [16])(puVar6 + 2);
      *(undefined1 *)puVar6 = 0;
      puVar6[2] = 0;
      puVar6[3] = 0xf;
      iVar1 = (int)puVar6[4];
      if ((iVar1 == 2) || (iVar1 - 3U < 4)) {
        bVar3 = 0;
      }
      else {
        bVar3 = (iVar1 != 1) + 1;
      }
      iVar2 = (int)param_1[4];
      local_68 = local_88;
      uStack_60 = uStack_80;
      local_48 = iVar1;
      if (((iVar2 == 2) || (iVar2 - 3U < 4)) || ((byte)((iVar2 != 1) + 1U) <= bVar3)) {
        puVar5 = puVar6;
        while( true ) {
          auVar7 = auVar8._0_16_;
          puVar4 = puVar5 + -5;
          bVar3 = 0;
          if (4 < iVar1 - 2U) {
            bVar3 = (iVar1 != 1) + 1;
          }
          iVar2 = (int)puVar5[-1];
          if (((iVar2 == 2) || (iVar2 - 3U < 4)) || ((byte)((iVar2 != 1) + 1U) <= bVar3)) break;
          if (puVar5 != puVar4) {
            auVar8 = ZEXT1664(auVar7);
            FUN_18015c010(puVar5);
            *puVar5 = *puVar4;
            puVar5[1] = puVar5[-4];
            puVar5[2] = puVar5[-3];
            puVar5[3] = puVar5[-2];
            puVar5[-3] = 0;
            puVar5[-2] = 0xf;
            *(undefined1 *)puVar4 = 0;
          }
          *(int *)(puVar5 + 4) = (int)puVar5[-1];
          puVar5 = puVar4;
        }
        if (puVar5 != &local_68) {
          auVar8 = ZEXT1664(auVar7);
          FUN_18015c010(puVar5);
          *puVar5 = local_88;
          puVar5[1] = uStack_80;
          puVar5[2] = uStack_78;
          puVar5[3] = uStack_70;
          auVar7 = auVar8._0_16_;
          local_68 = local_68 & 0xffffffffffffff00;
          auStack_58 = auVar7;
        }
        *(int *)(puVar5 + 4) = iVar1;
      }
      else {
        auVar8 = ZEXT1664(auVar8._0_16_);
        FUN_1802c2290(param_1,puVar6,puVar6 + 5);
        auVar7 = auVar8._0_16_;
        if (param_1 != &local_68) {
          FUN_18015c010(param_1);
          *param_1 = local_88;
          param_1[1] = uStack_80;
          param_1[2] = uStack_78;
          param_1[3] = uStack_70;
          auVar7 = auVar8._0_16_;
          local_68 = local_68 & 0xffffffffffffff00;
          auStack_58 = auVar7;
        }
        *(int *)(param_1 + 4) = iVar1;
      }
      puVar6 = puVar6 + 5;
      auVar8 = ZEXT1664(auVar7);
      FUN_18015c010(&local_68);
    } while (puVar6 != param_2);
  }
}



