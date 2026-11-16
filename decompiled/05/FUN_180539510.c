// FUN_180539510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180539510 */

void FUN_180539510(float *param_1,char param_2)

{
  longlong lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  float fVar5;
  char cVar6;
  undefined ***pppuVar7;
  longlong lVar8;
  char *pcVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined1 auVar14 [64];
  float local_res8;
  float local_resc;
  float local_res18;
  float local_res1c;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar15;
  undefined **local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined **ppuStack_60;
  undefined **local_58;
  undefined8 uStack_50;
  undefined1 local_48 [16];
  
  lVar1 = DAT_180bb8ae8;
  fVar5 = DAT_180b0a41c;
  uVar4 = DAT_1808da474;
  uVar15 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  fVar2 = DAT_180b0a41c * 146.0;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar8 = DAT_180c62ca8;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar2 + *param_1 + 0.5)),1);
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x14d0) + 0x2c8);
  local_res8 = auVar3._0_4_;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar5 * 16.0 + param_1[1] + 0.5)),1);
  auVar14 = ZEXT1664(auVar3);
  local_resc = (float)FUN_1804632d0(DAT_180c62ca8,0x4157851f);
  local_resc = auVar14._0_4_ - local_resc;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.47 + 0.5)),1);
  auVar3 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar3);
  uVar11 = auVar3._0_8_;
  if ((uVar4 & 0xff000000) != 0) {
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x20);
    }
    if (auVar3._0_4_ == 0.0) {
      uVar11 = (ulonglong)*(uint *)(*(longlong *)(lVar1 + 0x38) + 0x28);
    }
    local_58 = *(undefined ***)(lVar1 + 0x60);
    uStack_50 = *(undefined8 *)(lVar1 + 0x68);
    FUN_1804ea5f0(lVar8,lVar1,uVar11,&local_res8,CONCAT44(uVar15,uVar4),&local_58,"Configure",0,0,0)
    ;
  }
  puVar10 = &DAT_180c62878;
  if (param_2 != '\0') {
    puVar10 = &DAT_180c62f68;
  }
  local_58 = &PTR_DAT_18086b738;
  if (param_2 != '\0') {
    ppuStack_60 = (undefined **)0x3;
    local_68 = (undefined **)&DAT_18086c680;
  }
  else {
    local_58 = &PTR_DAT_18086bdc0;
    local_70 = 3;
    local_78 = &PTR_s_Projectile_ESP_18086bac0;
  }
  local_res8 = DAT_180b0a41c * 500.0 + *param_1;
  local_resc = DAT_180b0a41c * 33.0 + param_1[1];
  local_res18 = DAT_180b0a41c * 219.0 + *param_1;
  uStack_50 = 3;
  local_res1c = DAT_180b0a41c * 11.0 + param_1[1];
  pppuVar7 = &local_78;
  if (param_2 != '\0') {
    pppuVar7 = &local_68;
  }
  pcVar9 = "##grenade_editor";
  local_68 = *pppuVar7;
  ppuStack_60 = pppuVar7[1];
  if (param_2 != '\0') {
    pcVar9 = "##item_editor";
  }
  local_48 = (undefined1  [16])0x0;
  cVar6 = FUN_1804abea0(pcVar9,&local_res18,&local_res8,&local_68,puVar10);
  if (cVar6 != '\0') {
    DAT_180c62f48 = 0;
    DAT_180c62fe0 = 0;
    DAT_1808e4f84 = 0xffffffff;
    DAT_180bbecdf = 0;
    DAT_180bbecde = 0;
    lVar8 = FUN_180439770();
    lVar1 = DAT_180bb8ae8;
    *(undefined8 *)(lVar8 + 0x420) = 0;
    uVar11 = (ulonglong)*(int *)(lVar1 + 0x1ff8);
    if (0 < *(int *)(lVar1 + 0x1ff8)) {
      plVar13 = (longlong *)(*(longlong *)(lVar1 + 0x2000) + -0x30 + uVar11 * 0x38);
      uVar12 = uVar11;
      do {
        if ((*plVar13 == 0) || ((*(uint *)(*plVar13 + 0x14) & 0x8000000) != 0)) break;
        uVar12 = (ulonglong)((int)uVar12 - 1);
        uVar11 = uVar11 - 1;
        plVar13 = plVar13 + -7;
      } while (0 < (longlong)uVar11);
      if ((int)uVar12 < *(int *)(lVar1 + 0x1ff8)) {
        FUN_1804c7a50(uVar12 & 0xffffffff,CONCAT71((int7)(uVar11 >> 8),1));
      }
    }
  }
  return;
}



