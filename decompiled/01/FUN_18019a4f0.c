// FUN_18019a4f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18019a4f0 */

undefined1 FUN_18019a4f0(undefined8 param_1,char param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  double dVar2;
  char cVar3;
  undefined1 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 local_48 [16];
  ulonglong local_38 [4];
  
  cVar3 = FUN_1801efaa0();
  if (cVar3 == '\0') {
    if ((*(char *)((longlong)param_3 + 0x12) != '\0') && (*(char *)(param_3 + 2) == '\0')) {
      if (*(ulonglong *)*param_3 <= (ulonglong)param_3[1]) {
        *(ulonglong *)*param_3 = param_3[1] + 0x10;
        *(undefined1 *)(param_3 + 2) = 1;
        local_48 = ZEXT816(0x1807c5388);
        FUN_18017bf40(local_48 + 8);
        if (param_2 == '\0') {
          uVar4 = FUN_1801efc70(param_1);
        }
        else {
          uVar4 = FUN_1801f0600();
        }
        FUN_18017bf40(local_38);
        uVar7 = local_38[0] - local_48._8_8_;
        puVar5 = (ulonglong *)FUN_1801b1760();
        uVar8 = *puVar5 + 1;
        *puVar5 = uVar8;
        uVar1 = puVar5[1];
        puVar5[1] = uVar1 + uVar7;
        uVar9 = puVar5[3] + (ulonglong)(999999 < uVar7);
        puVar5[3] = uVar9;
        uVar10 = puVar5[4] + (ulonglong)(4999999 < uVar7);
        puVar5[4] = uVar10;
        uVar11 = puVar5[5] + (ulonglong)(15999999 < uVar7);
        puVar5[5] = uVar11;
        uVar6 = puVar5[2];
        if (puVar5[2] < uVar7) {
          puVar5[2] = uVar7;
          uVar6 = uVar7;
        }
        if ((local_38[0] == puVar5[7]) || ((longlong)puVar5[7] <= (longlong)local_38[0])) {
          dVar14 = (double)(longlong)(local_38[0] - puVar5[6]) / 1000000.0;
          dVar2 = (double)(uVar1 + uVar7);
          dVar13 = 0.0;
          if (0.0 < dVar14) {
            dVar13 = (dVar2 / 1000.0) / dVar14;
          }
          dVar12 = (dVar2 / (double)uVar8) / 1000.0;
          FUN_1801af8a0(dVar2 / (double)uVar8,dVar12,local_48._0_8_,uVar9,uVar8,dVar12,
                        (double)uVar6 / 1000.0,dVar2 / 1000000.0,dVar14,dVar13,uVar9,uVar10,uVar11);
          puVar5[2] = 0;
          puVar5[1] = 0;
          *puVar5 = 0;
          puVar5[5] = 0;
          puVar5[4] = 0;
          puVar5[3] = 0;
          puVar5[6] = local_38[0];
          puVar5[7] = local_38[0] + 5000000000;
        }
        return uVar4;
      }
    }
    *(undefined1 *)((longlong)param_3 + 0x11) = 1;
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}



