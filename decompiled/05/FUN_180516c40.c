// FUN_180516c40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180516c40 */

void FUN_180516c40(undefined8 param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float local_res18;
  undefined4 local_res1c;
  
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  fVar3 = *(float *)(lVar1 + 0x28);
  uVar4 = *(undefined4 *)(lVar1 + 0x2c);
  fVar2 = fVar3 + *(float *)(lVar1 + 0x30) + DAT_180b0a41c * 7.0;
  lVar1 = **(longlong **)(DAT_180bb8ae8 + 0x2030);
  FUN_180488320();
  if (*(float *)(lVar1 + 0x28) + *(float *)(lVar1 + 0x20) < DAT_180b0a41c * param_2 + fVar2) {
    fVar2 = fVar3 - (param_2 + 7.0) * DAT_180b0a41c;
  }
  local_res18 = fVar2;
  local_res1c = uVar4;
  FUN_1804884d0(param_1,&local_res18);
  return;
}



