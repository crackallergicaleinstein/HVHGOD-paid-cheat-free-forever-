// FUN_180571000 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180571000 */

undefined8
FUN_180571000(undefined8 param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  longlong lVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  pfVar1 = (float *)*param_4;
  pfVar2 = (float *)*param_3;
  local_28 = (undefined1  [16])0x0;
  local_18 = (undefined1  [16])0x0;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(*param_2 + lVar4) != '\0');
  uVar6 = FUN_18015ba30(local_28);
  puVar3 = (undefined8 *)FUN_1803db750(uVar6,local_28,0x3f800000);
  FUN_18015c010(local_28);
  fVar5 = 0.0;
  fVar7 = 0.0;
  if (puVar3 == (undefined8 *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *puVar3;
    fVar5 = (float)*(int *)(puVar3 + 4);
    fVar7 = (float)*(int *)((longlong)puVar3 + 0x24);
  }
  *pfVar2 = fVar5;
  *pfVar1 = fVar7;
  return uVar6;
}



