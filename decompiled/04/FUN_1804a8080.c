// FUN_1804a8080 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a8080 */

void FUN_1804a8080(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,char param_6)

{
  int iVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if ((DAT_180c62c80 == 0) || (DAT_180c62c88 == 0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FUN_1804d9170();
    if (*(longlong *)(DAT_180bb8ae8 + 0xc48) != 0) {
      FUN_1804d9170(param_1);
    }
  }
  if (param_6 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x38);
    local_28 = *(undefined4 *)(lVar2 + 0x44);
    local_24 = *(undefined4 *)(lVar2 + 0x48);
    local_20 = *(undefined4 *)(lVar2 + 0x3c);
    local_1c = *(undefined4 *)(lVar2 + 0x40);
    FUN_1804d9420(param_1,&local_20,&local_28,0);
    FUN_180462b50(param_1,param_2,param_3,param_4,DAT_180b0a41c * 12.0,DAT_180b0a55c);
    iVar1 = *(int *)(param_1 + 0xa0);
    iVar8 = iVar1 + -1;
    *(int *)(param_1 + 0xa0) = iVar8;
    if (iVar8 == 0) {
      puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x3c);
    }
    else {
      puVar9 = (undefined8 *)((longlong)(iVar1 + -2) * 0x10 + *(longlong *)(param_1 + 0xa8));
    }
    uVar6 = puVar9[1];
    *(undefined8 *)(param_1 + 0x60) = *puVar9;
    *(undefined8 *)(param_1 + 0x68) = uVar6;
    FUN_1804d9200(param_1);
  }
  if (bVar7) {
    FUN_18045f920(param_1,param_2,param_3,param_4);
  }
  else {
    auVar11._0_4_ = (float)(param_5 >> 0x18) / 255.0;
    auVar11._4_12_ = SUB1612(ZEXT816(0),4);
    auVar3 = vmaxss_avx(auVar11,ZEXT416(0x3c23d70a));
    auVar4 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)(auVar3._0_4_ + 0.16)));
    fVar5 = (auVar4._0_4_ / auVar3._0_4_) * auVar11._0_4_;
    fVar10 = 0.0;
    if (0.0 <= fVar5) {
      auVar3 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)fVar5));
      fVar10 = auVar3._0_4_;
    }
    param_5 = (int)(longlong)(fVar10 * 255.0 + 0.5) << 0x18 | param_5 & 0xffffff;
  }
  FUN_1804df870(param_1,param_2,param_3,param_5);
  return;
}



