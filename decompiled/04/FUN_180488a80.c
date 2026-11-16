// FUN_180488a80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180488a80 */

void FUN_180488a80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auVar6 [64];
  float fVar7;
  float fVar8;
  float fVar9;
  float local_res18;
  float local_res1c;
  
  lVar2 = DAT_180bb8ae8;
  fVar5 = DAT_180b0a41c;
  if (DAT_180bbecdb == '\0') {
    lVar4 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    auVar6 = ZEXT464(0x41100000);
    fVar7 = *(float *)(lVar4 + 0x118);
    fVar8 = *(float *)(lVar4 + 0x11c);
    *(undefined1 *)(lVar4 + 0xce) = 1;
    fVar9 = fVar5 * 18.0;
    uVar1 = *(undefined8 *)(*(longlong *)(lVar2 + 0x14d0) + 0x2c8);
    local_res18 = fVar5 * 12.0 + fVar7;
    local_res1c = fVar9 * 0.5 + fVar8;
    FUN_180463dc0(uVar1,&local_res18,DAT_180b0a438,param_2,0x41100000);
    uVar3 = DAT_1808da474;
    local_res18 = DAT_180b0a41c * 23.0 + fVar7;
    fVar5 = (float)FUN_180463350(DAT_180c62cb0,auVar6._0_8_);
    local_res1c = (fVar9 - fVar5) * 0.5 + fVar8;
    FUN_180463450(uVar1,DAT_180c62cb0,auVar6._0_8_,&local_res18,uVar3,param_1,0);
    lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    if ((*(longlong *)(lVar2 + 0x1c8) != 0) ||
       (lVar4 = 0x280, *(longlong *)(DAT_180bb8ae8 + 0x2338) != 0)) {
      lVar4 = 0x250;
    }
    local_res18 = *(float *)(lVar2 + lVar4) - *(float *)(lVar2 + 0x118);
    local_res1c = fVar9;
    FUN_1804c6420(&local_res18,0xbf800000);
  }
  return;
}



