// FUN_180157500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180157500 */

undefined1 (*) [16]
FUN_180157500(longlong *param_1,undefined1 (*param_2) [16],undefined8 *param_3,undefined8 param_4,
             char *param_5)

{
  longlong lVar1;
  uint *puVar2;
  char cVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_3;
  uStack_30 = param_3[1];
  uVar6 = FUN_180157940(local_38,&local_38);
  *param_2 = (undefined1  [16])0x0;
  if (((longlong)uVar6 < 0) && (uVar6 != 0)) {
    lVar1 = -((~uVar6 >> 5) * 4 + 4);
  }
  else {
    lVar1 = (uVar6 >> 5) * 4;
  }
  uVar8 = (uint)uVar6 & 0x1f;
  uVar6 = (ulonglong)uVar8;
  *(longlong *)*param_2 = *param_1 + lVar1;
  *(ulonglong *)(*param_2 + 8) = uVar6;
  puVar4 = *(uint **)*param_2;
  uVar7 = (uint)(uVar6 + 1) & 0x1f;
  cVar3 = *param_5;
  puVar2 = puVar4 + (uVar6 + 1 >> 5);
  if ((puVar4 != puVar2) || (uVar6 != uVar7)) {
    uVar8 = -1 << uVar8;
    uVar5 = -(uint)(cVar3 != '\0');
    if (puVar4 == puVar2) {
      uVar7 = 0xffffffff >> (0x20 - uVar7 & 0x1f);
      *puVar4 = (~uVar7 | ~uVar8) & *puVar4 | uVar7 & uVar5 & uVar8;
    }
    else {
      *puVar4 = *puVar4 & ~uVar8 | uVar5 & uVar8;
      FUN_18063ab10(puVar4 + 1,-(cVar3 != '\0'),(longlong)puVar2 - (longlong)(puVar4 + 1));
      if ((ulonglong)uVar7 != 0) {
        uVar7 = 0xffffffff >> (0x20 - uVar7 & 0x1f);
        *puVar2 = ~uVar7 & *puVar2 | uVar7 & uVar5;
      }
    }
  }
  return param_2;
}



