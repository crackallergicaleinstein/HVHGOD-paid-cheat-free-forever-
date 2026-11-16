// FUN_1805303d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805303d0 */

void FUN_1805303d0(undefined8 param_1,float param_2)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  float local_res18;
  undefined4 local_res1c;
  
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  uVar3 = *(undefined4 *)(lVar1 + 0x2c);
  fVar2 = *(float *)(lVar1 + 0x28) + *(float *)(lVar1 + 0x30) + DAT_180b0a41c * 7.0;
  if (*(float *)(**(longlong **)(DAT_180bb8ae8 + 0x2030) + 0x28) +
      *(float *)(**(longlong **)(DAT_180bb8ae8 + 0x2030) + 0x20) < fVar2 + DAT_180b0a41c * param_2)
  {
    fVar2 = (*(float *)(lVar1 + 0x28) - DAT_180b0a41c * 7.0) - DAT_180b0a41c * param_2;
  }
  FUN_180488320();
  local_res18 = fVar2;
  local_res1c = uVar3;
  FUN_1804884d0(param_1,&local_res18);
  return;
}



