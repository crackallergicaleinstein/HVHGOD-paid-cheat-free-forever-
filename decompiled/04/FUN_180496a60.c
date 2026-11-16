// FUN_180496a60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180496a60 */

void FUN_180496a60(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  undefined1 auVar5 [64];
  char local_res8 [8];
  undefined8 in_stack_ffffffffffffff28;
  undefined *puVar6;
  undefined4 uVar8;
  char *pcVar7;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  lVar2 = *param_1;
  if (DAT_180bbecdb == '\0') {
    FUN_1804c2800("Min Damage");
    local_res8[0] = '\0';
    pcVar7 = local_res8;
    puVar6 = (undefined *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff28 >> 8),1);
    FUN_1804898a0("Min Damage",lVar2 + 0x4d,0,1,puVar6,pcVar7);
    uVar8 = (undefined4)((ulonglong)pcVar7 >> 0x20);
    if (local_res8[0] != '\0') {
      FUN_180488320("##settings");
    }
    auVar5 = ZEXT864(0);
    cVar4 = FUN_180488630("##settings","Min Damage",0);
    if (cVar4 != '\0') {
      puVar6 = &DAT_180829c34;
      FUN_18048a250("Value",lVar2 + 0x50,0,0x43020000,&DAT_180829c34,CONCAT44(uVar8,0x3f800000),1,0)
      ;
      FUN_1804aeac0();
    }
    iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar1 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
    }
  }
  else {
    uVar8 = 0;
    FUN_1804898a0("Min Damage",lVar2 + 0x4d,0,1,1,0);
    FUN_180493f00("Min Damage");
    puVar6 = &DAT_180829c34;
    auVar5 = ZEXT864(0);
    FUN_18048a250("Value",lVar2 + 0x50,0,0x43020000,&DAT_180829c34,CONCAT44(uVar8,0x3f800000),1,0);
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  FUN_1804898a0("Auto Stop",*param_1 + 0x54,0,1,(ulonglong)puVar6 & 0xffffffffffffff00,0);
  local_98 = 0;
  uStack_90 = 0;
  auStack_88 = ZEXT816(0);
  local_78 = 1;
  uStack_70 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_38 = CONCAT71(uStack_77,1);
  uStack_30 = 0;
  auVar3 = vunpcklps_avx(auVar5._0_16_,auVar5._0_16_);
  local_28 = auVar3._0_8_;
  local_a8 = &PTR_DAT_1807b7b00;
  local_a0 = 3;
  FUN_18048d220(&DAT_1807c6e54,*param_1 + 0x58,&local_a8,1,0,&local_58);
  return;
}



