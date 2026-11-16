// FUN_18044fd40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044fd40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18044fd40(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined8 *param_3)

{
  byte bVar1;
  char cVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  char *pcVar6;
  undefined1 *puVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_d8;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  ulonglong uStack_b0;
  char local_a8 [24];
  undefined1 (*local_90) [16];
  undefined8 local_88;
  undefined8 uStack_80;
  byte local_78 [3];
  byte local_75 [5];
  undefined1 local_70 [24];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  builtin_strncpy(local_a8,"0123456789ABCDEF",0x11);
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0xf;
  (*param_1)[0] = 0;
  local_d8 = 1;
  local_88 = *param_3;
  uStack_80 = param_3[1];
  local_c8 = *param_2;
  local_e8 = 0x180;
  local_90 = param_1;
  puVar5 = (undefined8 *)FUN_1802c75c0(local_70,local_c8,&local_88);
  pcVar12 = (char *)*puVar5;
  pcVar3 = (char *)puVar5[1];
  if (pcVar12 != pcVar3) {
    uVar13 = 0;
    uVar14 = 0xf;
    do {
      FUN_18015b2a0(param_1,"<font color=\'#",0xe);
      local_78[0] = pcVar12[0x20];
      local_78[1] = pcVar12[0x21];
      local_78[2] = pcVar12[0x22];
      pbVar9 = local_78;
      do {
        bVar1 = *pbVar9;
        FUN_18015af80(param_1,local_a8[bVar1 >> 4]);
        FUN_18015af80(param_1,local_a8[bVar1 & 0xf]);
        pbVar9 = pbVar9 + 1;
      } while (pbVar9 != local_75);
      FUN_18015b2a0(param_1,&DAT_180827dac,2);
      pcVar8 = pcVar12;
      if (0xf < *(ulonglong *)(pcVar12 + 0x18)) {
        pcVar8 = *(char **)pcVar12;
      }
      local_c8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar4[0xf] = 0;
      auVar4._0_15_ = local_c8._1_15_;
      local_c8 = auVar4 << 8;
      local_d8 = 3;
      pcVar10 = pcVar8 + *(longlong *)(pcVar12 + 0x10);
      local_b8 = uVar13;
      uStack_b0 = uVar14;
      for (; pcVar8 != pcVar10; pcVar8 = pcVar8 + 1) {
        cVar2 = *pcVar8;
        if (cVar2 == '\"') {
          uVar11 = 6;
          pcVar6 = "&quot;";
LAB_18044ff16:
          FUN_18015b2a0(local_c8,pcVar6,uVar11);
        }
        else {
          if (cVar2 == '&') {
            uVar11 = 5;
            pcVar6 = "&amp;";
            goto LAB_18044ff16;
          }
          if (cVar2 == '\'') {
            uVar11 = 5;
            pcVar6 = "&#39;";
            goto LAB_18044ff16;
          }
          if (cVar2 == '<') {
            uVar11 = 4;
            pcVar6 = "&lt;";
            goto LAB_18044ff16;
          }
          if (cVar2 == '>') {
            uVar11 = 4;
            pcVar6 = "&gt;";
            goto LAB_18044ff16;
          }
          FUN_18015af80();
        }
      }
      puVar7 = local_c8;
      if (0xf < uStack_b0) {
        puVar7 = (undefined1 *)local_c8._0_8_;
      }
      FUN_18015b2a0(param_1,puVar7,local_b8);
      local_d8 = 1;
      FUN_18015c010(local_c8);
      FUN_18015b2a0(param_1,"</font>",7);
      pcVar12 = pcVar12 + 0x28;
    } while (pcVar12 != pcVar3);
  }
  FUN_1801b3620(local_70);
}



