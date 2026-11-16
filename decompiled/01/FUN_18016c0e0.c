// FUN_18016c0e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016c0e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18016c0e0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 ****ppppuVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined1 auStack_298 [32];
  undefined1 local_278 [16];
  undefined1 auStack_268 [16];
  undefined1 local_258 [16];
  undefined1 auStack_248 [16];
  undefined1 local_230 [16];
  undefined1 auStack_220 [16];
  undefined1 local_210 [16];
  undefined1 auStack_200 [16];
  undefined1 local_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined1 local_1d0 [32];
  undefined8 ****local_1b0 [2];
  longlong local_1a0;
  ulonglong local_198;
  undefined8 ****local_188;
  undefined8 ***pppuStack_180;
  undefined8 ***pppuStack_178;
  undefined8 ***pppuStack_170;
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined8 local_c8 [4];
  undefined1 local_a8;
  undefined1 local_a6;
  undefined1 local_a0 [32];
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_298;
  local_258 = (undefined1  [16])0x0;
  local_278 = (undefined1  [16])0x0;
  FUN_180172610(&DAT_180bb8af0,local_258,local_278);
  if (local_258._8_8_ == 0) {
    if (DAT_180bb8d22 == '\0') {
      FUN_180166570(local_1b0);
      if (local_1a0 == 0) {
        FUN_180113930(local_1b0,"new config",10);
      }
      FUN_18016a4e0(&local_188);
      ppppuVar5 = (undefined8 ****)FUN_1801666f0(local_230);
      if (&local_188 != (undefined8 *****)ppppuVar5) {
        FUN_18015c010(&local_188);
        local_188 = (undefined8 ****)*ppppuVar5;
        pppuStack_180 = ppppuVar5[1];
        pppuStack_178 = ppppuVar5[2];
        pppuStack_170 = ppppuVar5[3];
        ppppuVar5[2] = (undefined8 ***)0x0;
        ppppuVar5[3] = (undefined8 ***)0xf;
        *(undefined1 *)ppppuVar5 = 0;
      }
      FUN_18015c010(local_230);
      if (pppuStack_178 == (undefined8 ***)0x0) {
        FUN_180113930(&DAT_180bb8f50,"Cannot create config identity.",0x1e);
      }
      else {
        if (local_c8 != param_3) {
          puVar10 = param_3;
          if (0xf < (ulonglong)param_3[3]) {
            puVar10 = (undefined8 *)*param_3;
          }
          FUN_180113930(local_c8,puVar10,param_3[2]);
        }
        plVar6 = (longlong *)FUN_180177bd0(&DAT_180bb8f10,local_278,&local_188);
        if ((undefined8 *)(*plVar6 + 0x30) != param_3) {
          puVar10 = param_3;
          if (0xf < (ulonglong)param_3[3]) {
            puVar10 = (undefined8 *)*param_3;
          }
          FUN_180113930((undefined8 *)(*plVar6 + 0x30),puVar10,param_3[2]);
        }
        FUN_180172a90();
        uVar7 = FUN_180166490(local_1d0,local_1b0);
        pauVar8 = (undefined1 (*) [16])FUN_180141490(uVar7,0,&DAT_180700f58,4);
        local_230 = *pauVar8;
        auStack_220 = pauVar8[1];
        *(undefined8 *)(pauVar8[1] + 8) = 0xf;
        (*pauVar8)[0] = 0;
        *(undefined8 *)pauVar8[1] = 0;
        pauVar8 = (undefined1 (*) [16])FUN_18015b2a0(local_230,&DAT_180700de4,1);
        local_1f0 = *pauVar8;
        auStack_1e0 = pauVar8[1];
        (*pauVar8)[0] = 0;
        *(undefined8 *)pauVar8[1] = 0;
        *(undefined8 *)(pauVar8[1] + 8) = 0xf;
        puVar10 = param_3 + 2;
        if (0xf < (ulonglong)param_3[3]) {
          param_3 = (undefined8 *)*param_3;
        }
        pauVar8 = (undefined1 (*) [16])FUN_18015b2a0(local_1f0,param_3,*puVar10);
        local_210 = *pauVar8;
        auStack_200 = pauVar8[1];
        *(undefined8 *)(pauVar8[1] + 8) = 0xf;
        (*pauVar8)[0] = 0;
        *(undefined8 *)pauVar8[1] = 0;
        pauVar8 = (undefined1 (*) [16])FUN_18015b2a0(local_210,&DAT_180700de4,1);
        local_258 = *pauVar8;
        auStack_248 = pauVar8[1];
        (*pauVar8)[0] = 0;
        *(undefined8 *)pauVar8[1] = 0;
        *(undefined8 *)(pauVar8[1] + 8) = 0xf;
        ppppuVar5 = &local_188;
        if ((undefined8 ***)0xf < pppuStack_170) {
          ppppuVar5 = local_188;
        }
        pauVar8 = (undefined1 (*) [16])FUN_18015b2a0(local_258,ppppuVar5,pppuStack_178);
        local_278 = *pauVar8;
        auStack_268 = pauVar8[1];
        (*pauVar8)[0] = 0;
        *(undefined8 *)pauVar8[1] = 0;
        *(undefined8 *)(pauVar8[1] + 8) = 0xf;
        cVar4 = FUN_18016e0a0(&DAT_180bb8af0,local_278);
        FUN_18015c010(local_278);
        FUN_18015c010(local_258);
        FUN_18015c010(local_210);
        FUN_18015c010(local_1f0);
        FUN_18015c010(local_230);
        FUN_18015c010(local_1d0);
        ppppuVar5 = local_1b0;
        if (0xf < local_198) {
          ppppuVar5 = local_1b0[0];
        }
        FUN_180113930(local_168,ppppuVar5,local_1a0);
        FUN_180113930(local_148,"Just now",8);
        lVar3 = DAT_180bb8b20;
        local_a6 = 1;
        lVar1 = DAT_180bb8b38;
        for (lVar9 = DAT_180bb8b18; lVar2 = DAT_180bb8b30, DAT_180bb8b38 = lVar1, lVar9 != lVar3;
            lVar9 = lVar9 + 0x168) {
          *(undefined1 *)(lVar9 + 0xe0) = 0;
          lVar1 = DAT_180bb8b38;
        }
        for (; lVar2 != lVar1; lVar2 = lVar2 + 0x168) {
          *(undefined1 *)(lVar2 + 0xe0) = 0;
        }
        local_a8 = 1;
        ppppuVar5 = &local_188;
        if ((undefined8 ***)0xf < pppuStack_170) {
          ppppuVar5 = local_188;
        }
        FUN_180113930(&DAT_180bb8eb0,ppppuVar5,pppuStack_178);
        ppppuVar5 = &local_188;
        if ((undefined8 ***)0xf < pppuStack_170) {
          ppppuVar5 = local_188;
        }
        FUN_180113930(&DAT_180bb8ef0,ppppuVar5,pppuStack_178);
        if (DAT_180bb8b38 == DAT_180bb8b40) {
          FUN_180178f40(&DAT_180bb8b30,DAT_180bb8b38,&local_188);
        }
        else {
          FUN_18016c8d0(DAT_180bb8b38,&local_188);
          DAT_180bb8b38 = DAT_180bb8b38 + 0x168;
        }
        if (DAT_180bb8b20 == DAT_180bb8b28) {
          FUN_180178db0(&DAT_180bb8b18,DAT_180bb8b20,&local_188);
        }
        else {
          FUN_18017a9c0(DAT_180bb8b20,&local_188);
          DAT_180bb8b20 = DAT_180bb8b20 + 0x168;
        }
        pcVar11 = "Dummy config created locally.";
        if (cVar4 != '\0') {
          pcVar11 = "Dummy config created; cloud sync queued.";
        }
        lVar9 = -1;
        do {
          lVar9 = lVar9 + 1;
        } while (pcVar11[lVar9] != '\0');
        FUN_180113930(&DAT_180bb8f50);
      }
      FUN_18015c010(local_40);
      FUN_18015c010(local_60);
      FUN_18015c010(local_80);
      FUN_18015c010(local_a0);
      FUN_18015c010(local_c8);
      FUN_18015c010(local_e8);
      FUN_18015c010(local_108);
      FUN_18015c010(local_128);
      FUN_18015c010(local_148);
      FUN_18015c010(local_168);
      FUN_18015c010(&local_188);
      FUN_18015c010(local_1b0);
    }
    else {
      local_278 = (undefined1  [16])0x0;
      auStack_268 = (undefined1  [16])0x0;
      FUN_18015ba30(local_278,"Wait for the current private fork operation.",0x2c);
      FUN_18016df60(&DAT_180bb8af0,local_278,0);
      FUN_18015c010(local_278);
    }
  }
  else {
    local_278 = (undefined1  [16])0x0;
    auStack_268 = (undefined1  [16])0x0;
    FUN_18015ba30(local_278,local_258._0_8_);
    FUN_18016df60(&DAT_180bb8af0,local_278,0);
    FUN_18015c010(local_278);
  }
}



