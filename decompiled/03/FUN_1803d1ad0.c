// FUN_1803d1ad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d1ad0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803d1ad0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uStack_5c;
  
  FUN_1805464a0();
  lVar2 = DAT_1808f2cd0;
  if (DAT_180c653f0 != '\0') {
    DAT_1808f2c50 = 0;
    DAT_1808f2c58 = 0;
    uRam00000001808f2c60 = 0;
    uRam00000001808f2c68 = 0;
    uStack_5c = uStack_5c & 0xffffff00;
    uRam00000001808f2c88 = CONCAT44(uStack_5c,0x10000);
    _DAT_1808f2c70 = 0;
    uRam00000001808f2c78 = 0;
    uRam00000001808f2c80 = 0;
    _DAT_1808f2c90 = 0;
    uRam00000001808f2c98 = 0;
    uRam00000001808f2ca0 = 0;
    uRam00000001808f2ca8 = 0;
    DAT_1808f2cd0 = 0;
    uRam00000001808f2cd8 = 0;
    DAT_180c653f0 = '\0';
    _DAT_1808f2cb0 = 0;
    uRam00000001808f2cb8 = 0;
    uRam00000001808f2cc0 = 0x3f8000003f800000;
    uRam00000001808f2cc8 = 0;
    puVar3 = (undefined8 *)FUN_180439710();
    plVar1 = (longlong *)puVar3[1];
    for (plVar5 = (longlong *)*puVar3; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      if (*plVar5 != 0) {
        *(undefined2 *)(*plVar5 + 0x20) = 0x101;
      }
    }
    FUN_18043ae90();
    lVar4 = FUN_180439770();
    *(undefined8 *)(lVar4 + 0x410) = 0;
    *(undefined8 *)(lVar4 + 0x408) = 0;
    *(undefined8 *)(lVar4 + 0x428) = 0;
    *(undefined8 *)(lVar4 + 0x430) = 0;
    *(undefined8 *)(lVar4 + 0x418) = 0;
    if (lVar2 != 0) {
      (*(code *)lVar2)(0);
    }
  }
  FUN_1801d80f0();
  FUN_1803cfa70(&DAT_180ccaaa8);
  uVar6 = FUN_18015ddb0(1);
  DAT_180ccaa20 = 0;
  FUN_1803d1c70(uVar6,0);
  return;
}



