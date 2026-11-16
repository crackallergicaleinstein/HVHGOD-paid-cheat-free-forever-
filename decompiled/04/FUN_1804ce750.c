// FUN_1804ce750 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ce750 */

undefined1 (*) [16] FUN_1804ce750(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 (*pauVar3) [16];
  undefined1 *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 (*pauVar7) [16];
  uint uVar8;
  
  uVar8 = 0xffffffff;
  cVar1 = *param_3;
  pcVar5 = param_3;
  while (cVar1 != '\0') {
    pcVar6 = pcVar5 + 1;
    if (((cVar1 == '#') && (*pcVar6 == '#')) && (pcVar5[2] == '#')) {
      uVar8 = 0xffffffff;
      pcVar6 = pcVar5 + 3;
    }
    else {
      uVar8 = crc32(uVar8,cVar1);
    }
    pcVar5 = pcVar6;
    cVar1 = *pcVar6;
  }
  uVar8 = ~uVar8;
  lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x27a8);
  pauVar7 = (undefined1 (*) [16])0x0;
  if (lVar2 != 0) {
    pauVar7 = (undefined1 (*) [16])(lVar2 + 4);
  }
  do {
    if (pauVar7 == (undefined1 (*) [16])0x0) {
LAB_1804ce7f0:
      pauVar7 = (undefined1 (*) [16])FUN_1804ce460(param_3);
      (*pauVar7)[0xe] = (*pauVar7)[0xe] | 4;
      *(uint *)*pauVar7 = uVar8;
      return pauVar7;
    }
    if ((*(uint *)*pauVar7 == uVar8) && (((*pauVar7)[0xe] & 8) == 0)) {
      if (pauVar7 != (undefined1 (*) [16])0x0) {
        *pauVar7 = (undefined1  [16])0x0;
        (*pauVar7)[0xe] = (*pauVar7)[0xe] | 4;
        *(uint *)*pauVar7 = uVar8;
        return pauVar7;
      }
      goto LAB_1804ce7f0;
    }
    pauVar3 = pauVar7 + -1;
    puVar4 = *pauVar7;
    pauVar7 = (undefined1 (*) [16])0x0;
    if ((undefined1 (*) [16])(puVar4 + *(int *)(*pauVar3 + 0xc)) !=
        (undefined1 (*) [16])((longlong)*(int *)(DAT_180bb8ae8 + 0x27a0) + 4 + lVar2)) {
      pauVar7 = (undefined1 (*) [16])(puVar4 + *(int *)(*pauVar3 + 0xc));
    }
  } while( true );
}



