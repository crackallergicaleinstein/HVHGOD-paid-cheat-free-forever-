// FUN_1805f71d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f71d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001805f7335) */
/* WARNING: Removing unreachable block (ram,0x0001805f7337) */
/* WARNING: Removing unreachable block (ram,0x0001805f73b3) */
/* WARNING: Removing unreachable block (ram,0x0001805f73b5) */

void FUN_1805f71d0(undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
                  ulonglong param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  uVar9 = (uint)param_2 & 0xf;
  uVar10 = (ulonglong)uVar9;
  puVar6 = *param_1 + param_2;
  uVar5 = (uint)param_4;
  local_88 = param_2;
  if (param_4 < 0x11) {
    uVar13 = FUN_18063aed0(&local_88,param_3,param_4);
    auVar2._8_8_ = uStack_80;
    auVar2._0_8_ = local_88;
    do {
      if (puVar6 == *param_1 + uVar10) {
        if (uVar10 == 0) {
        }
        if (param_2 < 0x10) {
          FUN_18063aed0(uVar13,param_1,param_2);
          auVar14._8_8_ = uStack_80;
          auVar14._0_8_ = local_88;
        }
        else {
          auVar14 = *param_1;
        }
        pcmpestri(auVar2,auVar14,0x40,uVar5,uVar9);
      }
      pauVar8 = (undefined1 (*) [16])(puVar6 + -0x10);
      uVar13 = SUB168(*pauVar8,0);
      bVar11 = (undefined1 *)0xf < puVar6;
      puVar6 = puVar6 + -0x10;
      pcmpestri(auVar2,*pauVar8,0x40,uVar5,0x10);
    } while (bVar11);
  }
  else {
    uVar5 = uVar5 & 0xf;
    pauVar8 = (undefined1 (*) [16])(*param_3 + (param_4 & 0xfffffffffffffff0));
    FUN_18063aed0(local_78,pauVar8,uVar5);
    auVar2 = local_78;
    iVar4 = -1;
    do {
      if (puVar6 == *param_1 + uVar10) {
        if (uVar10 == 0) {
        }
        uVar12 = local_88 < 0x10;
        if ((bool)uVar12) {
          FUN_18063aed0(local_78,param_1);
        }
        else {
          local_78 = *param_1;
        }
        do {
          iVar3 = pcmpestri(*param_3,local_78,0x40,0x10,uVar9);
          if (((bool)uVar12) && (iVar4 < iVar3)) {
            iVar4 = iVar3;
          }
          param_3 = param_3 + 1;
          uVar12 = param_3 < pauVar8;
        } while (param_3 != pauVar8);
        if ((param_4 & 0xf) == 0) {
        }
        pcmpestri(auVar2,local_78,0x40,uVar5,uVar9);
      }
      pauVar1 = (undefined1 (*) [16])(puVar6 + -0x10);
      bVar11 = puVar6 < (undefined1 *)0x10;
      puVar6 = puVar6 + -0x10;
      pauVar7 = param_3;
      do {
        iVar3 = pcmpestri(*pauVar7,*pauVar1,0x40,0x10,0x10);
        if ((bVar11) && (iVar4 < iVar3)) {
          iVar4 = iVar3;
        }
        pauVar7 = pauVar7 + 1;
        bVar11 = pauVar7 < pauVar8;
      } while (pauVar7 != pauVar8);
      if ((param_4 & 0xf) != 0) {
        pcmpestri(local_78,*pauVar1,0x40,uVar5,0x10);
      }
    } while (iVar4 == -1);
  }
}



