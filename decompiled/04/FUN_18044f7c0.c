// FUN_18044f7c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044f7c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18044f7c0(undefined8 *param_1,undefined8 ***param_2,longlong param_3)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined8 ****ppppuVar12;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  undefined8 **local_1a8;
  undefined8 **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 ****local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined1 auStack_168 [16];
  undefined4 local_158;
  undefined4 local_154;
  undefined *local_150;
  undefined8 ****local_148 [2];
  undefined8 local_138;
  ulonglong local_130;
  undefined8 ****local_128 [3];
  ulonglong local_110;
  undefined1 local_108 [16];
  undefined1 auStack_f8 [16];
  undefined1 local_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined8 *local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_1d8;
  local_188 = (undefined8 ****)param_2;
  FUN_18044f500();
  lVar3 = DAT_180c62be8;
  if ((DAT_180c62be8 == 0) || (DAT_180bbec8e != '\0')) {
    local_1a8 = *param_2;
    ppuStack_1a0 = param_2[1];
    FUN_1802c7200(local_178,&local_1a8,0x180);
    local_1a8 = (undefined8 **)*param_1;
    ppuStack_1a0 = (undefined8 **)param_1[1];
    uVar7 = FUN_1802c7200(local_88,&local_1a8,0x20);
    pauVar8 = (undefined1 (*) [16])FUN_180141490(uVar7,0,"[HVHGOD] | ",0xb);
    local_e8 = *pauVar8;
    auStack_d8 = pauVar8[1];
    *(undefined8 *)(pauVar8[1] + 8) = 0xf;
    (*pauVar8)[0] = 0;
    *(undefined8 *)pauVar8[1] = 0;
    puVar9 = (undefined8 *)FUN_18015b2a0(local_e8,&DAT_1807c6c50,3);
    local_1a8 = (undefined8 **)*puVar9;
    ppuStack_1a0 = (undefined8 **)puVar9[1];
    uStack_198 = puVar9[2];
    uStack_190 = puVar9[3];
    *(undefined1 *)puVar9 = 0;
    puVar9[2] = 0;
    puVar9[3] = 0xf;
    FUN_18015a6e0(local_148);
    local_188 = local_148;
    if (0xf < local_130) {
      local_188 = local_148[0];
    }
    uStack_180 = local_138;
    FUN_18044f5b0(&local_188);
    FUN_18015c010(local_148);
    FUN_18015c010(&local_1a8);
    FUN_18015c010(local_e8);
    FUN_18015c010(local_88);
    FUN_18015c010(local_178);
  }
  else {
    local_150 = &DAT_1808e4e90;
    iVar6 = FUN_1805f68d0(&DAT_1808e4e90);
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808e4edc == 0x7fffffff) {
      DAT_1808e4edc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    local_1a8 = *param_2;
    ppuStack_1a0 = param_2[1];
    FUN_1802c7200(local_a8,&local_1a8,0x180);
    local_1a8 = (undefined8 **)*param_1;
    ppuStack_1a0 = (undefined8 **)param_1[1];
    uVar7 = FUN_1802c7200(local_c8,&local_1a8,0x20);
    pauVar8 = (undefined1 (*) [16])FUN_180141490(uVar7,0,"[HVHGOD] | ",0xb);
    local_108 = *pauVar8;
    auStack_f8 = pauVar8[1];
    *(undefined8 *)(pauVar8[1] + 8) = 0xf;
    (*pauVar8)[0] = 0;
    *(undefined8 *)pauVar8[1] = 0;
    puVar9 = (undefined8 *)FUN_18015b2a0(local_108,&DAT_1807c6c50,3);
    local_1a8 = (undefined8 **)*puVar9;
    ppuStack_1a0 = (undefined8 **)puVar9[1];
    uStack_198 = puVar9[2];
    uStack_190 = puVar9[3];
    *(undefined1 *)puVar9 = 0;
    puVar9[2] = 0;
    puVar9[3] = 0xf;
    FUN_18015a6e0(local_128);
    ppppuVar12 = local_128;
    if ((local_110 < 0x10) || (ppppuVar12 = local_128[0], local_128[0] != (undefined8 ****)0x0)) {
      puVar10 = (undefined1 *)FUN_1803b0a60();
      uVar1 = *puVar10;
      puVar10 = (undefined1 *)FUN_1803b0a60();
      *puVar10 = 1;
      FUN_1800a9e50(1,ppppuVar12);
      puVar10 = (undefined1 *)FUN_1803b0a60();
      *puVar10 = uVar1;
    }
    FUN_18015c010(local_128);
    FUN_18015c010(&local_1a8);
    FUN_18015c010(local_108);
    FUN_18015c010(local_c8);
    FUN_18015c010(local_a8);
    local_68 = (undefined8 *)0x0;
    puStack_60 = (undefined8 *)0x0;
    local_58 = (undefined8 *)0x0;
    local_1a8 = *local_188;
    ppuStack_1a0 = local_188[1];
    local_188 = (undefined8 ****)*param_1;
    uStack_180 = param_1[1];
    local_1b8 = 0x180;
    FUN_1802c75c0(&local_68,&local_188,&local_1a8,param_3);
    local_178 = (undefined1  [16])0x0;
    auStack_168 = (undefined1  [16])0x0;
    FUN_18015ba30(local_178,&DAT_180812948,1);
    local_158 = *(undefined4 *)(param_3 + 4);
    local_154 = 1;
    if (puStack_60 == local_58) {
      FUN_1802eb4a0(&local_68,puStack_60,local_178);
    }
    else {
      *puStack_60 = local_178._0_8_;
      puStack_60[1] = local_178._8_8_;
      puStack_60[2] = auStack_168._0_8_;
      puStack_60[3] = auStack_168._8_8_;
      auStack_168 = ZEXT816(0xf) << 0x40;
      auVar2[0xf] = 0;
      auVar2._0_15_ = local_178._1_15_;
      local_178 = auVar2 << 8;
      *(undefined4 *)(puStack_60 + 4) = local_158;
      *(undefined4 *)((longlong)puStack_60 + 0x24) = 1;
      puStack_60 = puStack_60 + 5;
    }
    FUN_18015c010(local_178);
    puVar10 = (undefined1 *)FUN_1803b0a60();
    uVar1 = *puVar10;
    puVar10 = (undefined1 *)FUN_1803b0a60();
    puVar4 = puStack_60;
    *puVar10 = 1;
    for (puVar9 = local_68; puVar9 != puVar4; puVar9 = puVar9 + 5) {
      cVar5 = FUN_1804513c0(lVar3,1,2);
      if (cVar5 == '\0') {
LAB_18044faf9:
        puVar10 = (undefined1 *)FUN_1803b0a60();
        *puVar10 = uVar1;
        LOCK();
        DAT_180c62be8 = 0;
        UNLOCK();
        FUN_1800a9e50(2,"Colored console output failed; subsequent events use plain console output."
                     );
        goto LAB_18044fae2;
      }
      lVar11 = FUN_18017ea70();
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
      cVar5 = FUN_18044fd10(lVar3,puVar9 + 4);
      lVar11 = FUN_18017ea70();
      if (*(int *)(lVar11 + 4) != 0) {
        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
      }
      if (cVar5 == '\0') goto LAB_18044faf9;
    }
    puVar10 = (undefined1 *)FUN_1803b0a60();
    *puVar10 = uVar1;
LAB_18044fae2:
    FUN_1801b3620(&local_68);
    FUN_1805f68fc(&DAT_1808e4e90);
  }
}



