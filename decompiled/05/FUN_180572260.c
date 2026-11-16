// FUN_180572260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180572260 */

void FUN_180572260(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  size_t sVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *_Buf1;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  
  for (uVar10 = 0x3f; 0xfffffffffffffffU >> uVar10 == 0; uVar10 = uVar10 - 1) {
  }
  if ((ulonglong)(1L << (uVar10 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa8b8("invalid hash bucket count");
  }
  uVar10 = param_2 - 1 | 1;
  plVar2 = *(longlong **)(param_1 + 8);
  lVar12 = 0x3f;
  if (uVar10 != 0) {
    for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  lVar12 = 1L << ((ulonglong)((int)lVar12 + 1) & 0x3f);
  FUN_1801406e0(param_1 + 0x18,lVar12 * 2,plVar2);
  *(longlong *)(param_1 + 0x38) = lVar12;
  *(longlong *)(param_1 + 0x30) = lVar12 + -1;
  plVar8 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x0001805722e9:
  do {
    while( true ) {
      while( true ) {
        if (plVar8 == plVar2) {
          return;
        }
        sVar3 = plVar8[3];
        uVar11 = 0xcbf29ce484222325;
        plVar4 = (longlong *)*plVar8;
        uVar10 = 0;
        if (sVar3 != 0) {
          do {
            pbVar1 = (byte *)(uVar10 + plVar8[2]);
            uVar10 = uVar10 + 1;
            uVar11 = (uVar11 ^ *pbVar1) * 0x100000001b3;
          } while (uVar10 < sVar3);
        }
        puVar14 = (undefined8 *)
                  ((*(ulonglong *)(param_1 + 0x30) & uVar11) * 0x10 + *(longlong *)(param_1 + 0x18))
        ;
        plVar5 = (longlong *)*puVar14;
        if (plVar5 != plVar2) break;
        *puVar14 = plVar8;
        puVar14[1] = plVar8;
        plVar8 = plVar4;
      }
      plVar13 = (longlong *)puVar14[1];
      if ((sVar3 != plVar13[3]) ||
         ((sVar3 != 0 && (iVar9 = memcmp((void *)plVar8[2],(void *)plVar13[2],sVar3), iVar9 != 0))))
      break;
      plVar13 = (longlong *)*plVar13;
      if (plVar13 != plVar8) {
        plVar5 = (longlong *)plVar8[1];
        *plVar5 = (longlong)plVar4;
        puVar6 = (undefined8 *)plVar4[1];
        *puVar6 = plVar13;
        puVar7 = (undefined8 *)plVar13[1];
        *puVar7 = plVar8;
        plVar13[1] = (longlong)puVar6;
        plVar4[1] = (longlong)plVar5;
        plVar8[1] = (longlong)puVar7;
      }
      puVar14[1] = plVar8;
      plVar8 = plVar4;
    }
    if (plVar5 != plVar13) {
      _Buf1 = (void *)plVar8[2];
      sVar3 = plVar8[3];
      do {
        plVar13 = (longlong *)plVar13[1];
        if ((sVar3 == plVar13[3]) &&
           ((sVar3 == 0 || (iVar9 = memcmp(_Buf1,(void *)plVar13[2],sVar3), iVar9 == 0)))) {
          lVar12 = *plVar13;
          plVar5 = (longlong *)plVar8[1];
          *plVar5 = (longlong)plVar4;
          plVar13 = (longlong *)plVar4[1];
          *plVar13 = lVar12;
          puVar14 = *(undefined8 **)(lVar12 + 8);
          *puVar14 = plVar8;
          *(longlong **)(lVar12 + 8) = plVar13;
          plVar4[1] = (longlong)plVar5;
          plVar8[1] = (longlong)puVar14;
          plVar8 = plVar4;
          goto joined_r0x0001805722e9;
        }
      } while (plVar5 != plVar13);
    }
    plVar5 = (longlong *)plVar8[1];
    *plVar5 = (longlong)plVar4;
    puVar6 = (undefined8 *)plVar4[1];
    *puVar6 = plVar13;
    puVar7 = (undefined8 *)plVar13[1];
    *puVar7 = plVar8;
    plVar13[1] = (longlong)puVar6;
    plVar4[1] = (longlong)plVar5;
    plVar8[1] = (longlong)puVar7;
    *puVar14 = plVar8;
    plVar8 = plVar4;
  } while( true );
}



