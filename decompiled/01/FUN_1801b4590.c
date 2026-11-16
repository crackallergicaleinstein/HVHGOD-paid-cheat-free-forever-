// FUN_1801b4590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b4590 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801b4590(ulonglong *param_1,ulonglong *param_2,undefined8 param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong *puVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  ulonglong uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  if ((param_1 != param_2) && (puVar9 = param_1 + 10, puVar9 != param_2)) {
    puVar8 = param_1 + 0x10;
    lVar6 = (longlong)param_4;
    uVar10 = 0;
    uVar11 = 0xf;
    do {
      local_b8 = *puVar9;
      uStack_b0 = puVar9[1];
      uStack_a8 = puVar9[2];
      uStack_a0 = puVar9[3];
      puVar8[-3] = 0xf;
      *(undefined1 *)puVar9 = 0;
      puVar5 = puVar8 + -0x10;
      puVar8[-4] = 0;
      local_78 = puVar8[-2];
      uStack_70 = puVar8[-1];
      uStack_68 = *puVar8;
      uStack_60 = puVar8[1];
      *(undefined2 *)(puVar8 + -2) = 0;
      *puVar8 = 0;
      puVar8[1] = 7;
      local_58 = (undefined4)puVar8[2];
      local_54 = *(undefined4 *)((longlong)puVar8 + 0x14);
      local_50 = puVar8[3];
      local_98 = local_b8;
      uStack_90 = uStack_b0;
      uStack_88 = uStack_a8;
      uStack_80 = uStack_a0;
      cVar4 = FUN_180114040((longlong)&local_98 + lVar6,
                            (undefined1 *)(lVar6 + -0x80 + (longlong)puVar8));
      puVar7 = puVar9;
      while (cVar4 < '\0') {
        if (puVar7 != puVar5) {
          FUN_18015c010(puVar7);
          uVar1 = puVar5[1];
          uVar2 = puVar5[2];
          uVar3 = puVar5[3];
          *puVar7 = *puVar5;
          puVar7[1] = uVar1;
          puVar7[2] = uVar2;
          puVar7[3] = uVar3;
          puVar5[2] = 0;
          puVar5[3] = 0xf;
          *(undefined1 *)puVar5 = 0;
        }
        FUN_180176c30(puVar7 + 4,puVar5 + 4);
        *(int *)(puVar7 + 8) = (int)puVar5[8];
        *(undefined4 *)((longlong)puVar7 + 0x44) = *(undefined4 *)((longlong)puVar5 + 0x44);
        puVar7[9] = puVar5[9];
        puVar7 = puVar7 + -10;
        if (puVar7 == param_1) break;
        puVar5 = puVar5 + -10;
        cVar4 = FUN_180114040((longlong)&local_98 + lVar6,(undefined1 *)(lVar6 + (longlong)puVar5));
      }
      if (puVar7 != &local_98) {
        FUN_18015c010(puVar7);
        *puVar7 = local_b8;
        puVar7[1] = uStack_b0;
        puVar7[2] = uStack_a8;
        puVar7[3] = uStack_a0;
        local_98 = local_98 & 0xffffffffffffff00;
        uStack_88 = uVar10;
        uStack_80 = uVar11;
      }
      FUN_180176c30(puVar7 + 4,&local_78);
      *(undefined4 *)(puVar7 + 8) = local_58;
      *(undefined4 *)((longlong)puVar7 + 0x44) = local_54;
      puVar7[9] = local_50;
      FUN_18015b930(&local_78);
      FUN_18015c010(&local_98);
      puVar9 = puVar9 + 10;
      puVar8 = puVar8 + 10;
    } while (puVar9 != param_2);
  }
}



