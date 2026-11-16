// FUN_18061aa94 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061aa94 */

undefined8 FUN_18061aa94(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  byte bVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  
  puVar4 = *(ulonglong **)*param_1;
  if (puVar4 == (ulonglong *)0x0) {
LAB_18061ac26:
    uVar2 = 0xffffffff;
  }
  else {
    bVar3 = (byte)DAT_1808d5f00 & 0x3f;
    uVar6 = (DAT_1808d5f00 ^ *puVar4) >> bVar3 | (DAT_1808d5f00 ^ *puVar4) << 0x40 - bVar3;
    puVar9 = (ulonglong *)
             ((DAT_1808d5f00 ^ puVar4[1]) >> bVar3 | (DAT_1808d5f00 ^ puVar4[1]) << 0x40 - bVar3);
    puVar4 = (ulonglong *)
             ((DAT_1808d5f00 ^ puVar4[2]) >> bVar3 | (DAT_1808d5f00 ^ puVar4[2]) << 0x40 - bVar3);
    if (puVar9 == puVar4) {
      uVar5 = (longlong)((longlong)puVar4 - uVar6) >> 3;
      uVar7 = uVar5;
      if (0x200 < uVar5) {
        uVar7 = 0x200;
      }
      uVar7 = uVar7 + uVar5;
      if (uVar7 == 0) {
        uVar7 = 0x20;
      }
      if (uVar7 < uVar5) {
LAB_18061ab36:
        uVar7 = uVar5 + 4;
        uVar1 = _recalloc_base(uVar6,uVar7,8);
        FUN_180621380(0);
        if (uVar1 == 0) goto LAB_18061ac26;
      }
      else {
        uVar1 = _recalloc_base(uVar6,uVar7,8);
        FUN_180621380(0);
        if (uVar1 == 0) goto LAB_18061ab36;
      }
      uVar6 = uVar1;
      uVar1 = DAT_1808d5f00;
      puVar9 = (ulonglong *)(uVar6 + uVar5 * 8);
      puVar4 = (ulonglong *)(uVar6 + uVar7 * 8);
      uVar7 = (ulonglong)((longlong)puVar4 + (7 - (longlong)puVar9)) >> 3;
      if (puVar4 < puVar9) {
        uVar7 = 0;
      }
      if (uVar7 != 0) {
        puVar8 = puVar9;
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar8 = uVar1;
          puVar8 = puVar8 + 1;
        }
      }
    }
    bVar3 = -((byte)DAT_1808d5f00 & 0x3f) & 0x3f;
    *puVar9 = (*(ulonglong *)param_1[1] >> bVar3 | *(ulonglong *)param_1[1] << 0x40 - bVar3) ^
              DAT_1808d5f00;
    bVar3 = -((byte)DAT_1808d5f00 & 0x3f) & 0x3f;
    **(ulonglong **)*param_1 = (uVar6 >> bVar3 | uVar6 << 0x40 - bVar3) ^ DAT_1808d5f00;
    bVar3 = -((byte)DAT_1808d5f00 & 0x3f) & 0x3f;
    *(ulonglong *)(*(longlong *)*param_1 + 8) =
         ((ulonglong)(puVar9 + 1) >> bVar3 | (longlong)(puVar9 + 1) << 0x40 - bVar3) ^ DAT_1808d5f00
    ;
    bVar3 = 0x40 - ((byte)DAT_1808d5f00 & 0x3f) & 0x3f;
    uVar2 = 0;
    *(ulonglong *)(*(longlong *)*param_1 + 0x10) =
         ((ulonglong)puVar4 >> bVar3 | (longlong)puVar4 << 0x40 - bVar3) ^ DAT_1808d5f00;
  }
  return uVar2;
}



