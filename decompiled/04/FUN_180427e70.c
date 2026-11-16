// FUN_180427e70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180427e70 */

undefined8 FUN_180427e70(char *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  char *pcVar10;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [48];
  
  puVar5 = (undefined8 *)_malloc_base(0x9c60);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_18063ab10(puVar5,0,0x9c60);
    pauVar6 = (undefined1 (*) [16])_malloc_base(0x10);
    puVar5[0x1384] = pauVar6;
    if (pauVar6 != (undefined1 (*) [16])0x0) {
      iVar9 = 2;
      *pauVar6 = (undefined1  [16])0x0;
      puVar5[8] = 0x3f800000;
      *(undefined8 *)((longlong)puVar5 + 0x4c) = 0x3f800000;
      *(undefined4 *)(puVar5 + 9) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x54) = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      *(undefined4 *)((longlong)puVar5 + 0x5c) = 0;
      *(undefined4 *)(puVar5 + 0xc) = 0x3f800000;
      *(undefined4 *)((longlong)puVar5 + 100) = 0x3f800000;
      *(undefined4 *)(puVar5 + 0xd) = 0x3f800000;
      *(undefined4 *)((longlong)puVar5 + 300) = 0x3f800000;
      *(undefined4 *)((longlong)puVar5 + 0xec) = 0x3f800000;
      *(undefined2 *)(puVar5 + 0x23) = 0;
      *(undefined4 *)((longlong)puVar5 + 0x11c) = 0x40800000;
      *(undefined1 *)(puVar5 + 0x24) = 0;
      *(undefined1 *)((longlong)puVar5 + 0x134) = 1;
      *(undefined2 *)((longlong)puVar5 + 0x136) = 0x1801;
      *(undefined4 *)((longlong)puVar5 + 0x9c54) = param_3;
      cVar1 = *param_1;
      pcVar10 = param_1;
      while (cVar1 != '\0') {
        if (cVar1 == '<') {
          if (iVar9 == 2) {
            *pcVar10 = '\0';
            cVar1 = *param_1;
            while ((cVar1 != '\0' && (lVar7 = FUN_180606b00(&DAT_18081e618,(int)cVar1), lVar7 != 0))
                  ) {
              cVar1 = param_1[1];
              param_1 = param_1 + 1;
            }
            iVar9 = 1;
            param_1 = pcVar10 + 1;
          }
        }
        else if ((cVar1 == '>') && (iVar9 == 1)) {
          *pcVar10 = '\0';
          FUN_180420e80(param_1);
          iVar9 = 2;
          param_1 = pcVar10 + 1;
        }
        pcVar10 = pcVar10 + 1;
        cVar1 = *pcVar10;
      }
      for (lVar7 = *(longlong *)(puVar5[0x1384] + 8); lVar7 != 0;
          lVar7 = *(longlong *)(lVar7 + 0x148)) {
        pcVar10 = (char *)(lVar7 + 0x40);
        if (*(char *)(lVar7 + 0x40) == -1) {
          if (*(char *)(lVar7 + 0xa8) != '\0') {
            FUN_1804211e0(local_48,lVar7 + 0x128);
            FUN_180421ff0(local_68,lVar7,local_48);
            uVar8 = FUN_180421c20(puVar5,lVar7 + 0xa8,local_68,lVar7 + 0x128,pcVar10);
            *(undefined8 *)(lVar7 + 0x48) = uVar8;
          }
          if (*pcVar10 == -1) {
            *pcVar10 = '\0';
          }
        }
        pcVar10 = (char *)(lVar7 + 0x50);
        if (*(char *)(lVar7 + 0x50) == -1) {
          if (*(char *)(lVar7 + 0xe8) != '\0') {
            FUN_1804211e0(local_48,lVar7 + 0x128);
            FUN_180421ff0(local_58,lVar7,local_48);
            uVar8 = FUN_180421c20(puVar5,lVar7 + 0xe8,local_58,lVar7 + 0x128,pcVar10);
            *(undefined8 *)(lVar7 + 0x58) = uVar8;
          }
          if (*pcVar10 == -1) {
            *pcVar10 = '\0';
          }
        }
      }
      FUN_1804279e0(puVar5);
      uVar8 = puVar5[0x1384];
      puVar5[0x1384] = 0;
      plVar4 = (longlong *)puVar5[0x1383];
      while (plVar4 != (longlong *)0x0) {
        plVar2 = (longlong *)plVar4[4];
        if (*plVar4 != 0) {
          thunk_FUN_180621380();
        }
        thunk_FUN_180621380(plVar4);
        plVar4 = plVar2;
      }
      lVar7 = puVar5[0x1385];
      while (lVar7 != 0) {
        lVar3 = *(longlong *)(lVar7 + 0xd8);
        thunk_FUN_180621380(*(undefined8 *)(lVar7 + 0xd0));
        thunk_FUN_180621380(lVar7);
        lVar7 = lVar3;
      }
      FUN_1804281e0(puVar5[0x1384]);
      thunk_FUN_180621380(puVar5[0x1381]);
      thunk_FUN_180621380(puVar5);
      return uVar8;
    }
    thunk_FUN_180621380(puVar5);
  }
  return 0;
}



