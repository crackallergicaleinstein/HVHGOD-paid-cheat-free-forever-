// FUN_180232390 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180232390 */

void FUN_180232390(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  plVar7 = DAT_180bbee18;
  for (uVar8 = 0x3f; 0xfffffffffffffffU >> uVar8 == 0; uVar8 = uVar8 - 1) {
  }
  if ((ulonglong)(1L << (uVar8 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("invalid hash bucket count");
  }
  uVar8 = param_2 - 1 | 1;
  lVar9 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  lVar9 = 1L << ((ulonglong)((int)lVar9 + 1) & 0x3f);
  FUN_1801b77b0(&DAT_180bbee28,lVar9 * 2,DAT_180bbee18);
  DAT_180bbee40 = lVar9 - 1;
  DAT_180bbee48 = lVar9;
  plVar6 = (longlong *)*DAT_180bbee18;
joined_r0x00018023240e:
  do {
    while( true ) {
      while( true ) {
        if (plVar6 == plVar7) {
          return;
        }
        plVar1 = (longlong *)*plVar6;
        puVar10 = (undefined8 *)
                  (((((((ulonglong)*(byte *)(plVar6 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar6 + 0x11)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar6 + 0x12)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar6 + 0x13)) * 0x100000001b3 & DAT_180bbee40)
                   * 0x10 + DAT_180bbee28);
        if ((longlong *)*puVar10 != plVar7) break;
        *puVar10 = plVar6;
        puVar10[1] = plVar6;
        plVar6 = plVar1;
      }
      plVar2 = (longlong *)puVar10[1];
      if ((int)plVar6[2] != (int)plVar2[2]) break;
      plVar2 = (longlong *)*plVar2;
      if (plVar2 != plVar6) {
        puVar3 = (undefined8 *)plVar6[1];
        *puVar3 = plVar1;
        puVar4 = (undefined8 *)plVar1[1];
        *puVar4 = plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar6;
        plVar2[1] = (longlong)puVar4;
        plVar1[1] = (longlong)puVar3;
        plVar6[1] = (longlong)puVar5;
      }
      puVar10[1] = plVar6;
      plVar6 = plVar1;
    }
    do {
      if ((longlong *)*puVar10 == plVar2) {
        puVar3 = (undefined8 *)plVar6[1];
        *puVar3 = plVar1;
        puVar4 = (undefined8 *)plVar1[1];
        *puVar4 = plVar2;
        puVar5 = (undefined8 *)plVar2[1];
        *puVar5 = plVar6;
        plVar2[1] = (longlong)puVar4;
        plVar1[1] = (longlong)puVar3;
        plVar6[1] = (longlong)puVar5;
        *puVar10 = plVar6;
        plVar6 = plVar1;
        goto joined_r0x00018023240e;
      }
      plVar2 = (longlong *)plVar2[1];
    } while ((int)plVar6[2] != (int)plVar2[2]);
    lVar9 = *plVar2;
    puVar10 = (undefined8 *)plVar6[1];
    *puVar10 = plVar1;
    plVar2 = (longlong *)plVar1[1];
    *plVar2 = lVar9;
    puVar3 = *(undefined8 **)(lVar9 + 8);
    *puVar3 = plVar6;
    *(longlong **)(lVar9 + 8) = plVar2;
    plVar1[1] = (longlong)puVar10;
    plVar6[1] = (longlong)puVar3;
    plVar6 = plVar1;
  } while( true );
}



