// FUN_1804cd1d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cd1d0 */

undefined8 FUN_1804cd1d0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar5 = DAT_180bb8ae8;
  iVar1 = *(int *)(DAT_180bb8ae8 + 0x1ec0);
  lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if ((iVar1 != 0) && (*(int *)(DAT_180bb8ae8 + 0x1550) == iVar1)) {
    iVar6 = (int)*(char *)(DAT_180bb8ae8 + 0x1565);
    if (*(char *)(DAT_180bb8ae8 + 0x1565) == -1) {
      iVar6 = 0;
    }
    lVar7 = (longlong)iVar6;
    if ((*(char *)(lVar7 + 0x118 + DAT_180bb8ae8) != '\0') && (*(char *)(lVar3 + 0xd1) == '\0')) {
      *(undefined1 *)(DAT_180bb8ae8 + 0x155f) = 0;
      uVar2 = *(undefined4 *)
               (*(longlong *)(lVar3 + 0x110) + -4 + (longlong)*(int *)(lVar3 + 0x108) * 4);
      if (*(char *)(lVar5 + 0x118 + lVar7) == '\0') {
        bVar4 = false;
      }
      else {
        bVar4 = *(float *)(lVar5 + 0xa0) * *(float *)(lVar5 + 0xa0) <=
                *(float *)(lVar5 + 0xbc4 + lVar7 * 4);
      }
      *(undefined4 *)(lVar5 + 0x1e70) = 0xf;
      *(undefined1 *)(lVar5 + 0x1e74) = 1;
      *(bool *)(lVar5 + 0x20a1) = *(char *)(lVar5 + 0x20a2) != '\0';
      *(undefined2 *)(lVar5 + 0x20e0) = 0;
      if (bVar4) {
        if (*(char *)(lVar5 + 0x2268) == '\0') {
          FUN_1804cd120();
          if ((*(byte *)(lVar5 + 0x28cc) & 2) != 0) {
            FUN_1804cf3e0("[dragdrop] BeginDragDropSource() DragDropActive = true, source_id = 0x%08X%s\n"
                          ,iVar1,&PTR_180700558);
          }
          *(int *)(lVar5 + 0x2284) = iVar1;
          *(undefined4 *)(lVar5 + 0x2288) = uVar2;
          *(undefined1 *)(lVar5 + 0x2268) = 1;
          *(undefined4 *)(lVar5 + 0x226c) = 0;
          *(int *)(lVar5 + 0x2274) = iVar6;
          if (iVar1 == *(int *)(lVar5 + 0x1550)) {
            *(undefined1 *)(lVar5 + 0x1560) = 1;
          }
        }
        *(undefined4 *)(lVar5 + 0x2270) = *(undefined4 *)(lVar5 + 4);
        *(undefined1 *)(lVar5 + 0x2269) = 1;
        lVar3 = DAT_180bb8ae8;
        if ((*(int *)(lVar5 + 0x22f0) == 0) || ((*(uint *)(lVar5 + 0x22e4) & 0x1000) == 0)) {
          FUN_1804c73e0(0);
          *(uint *)(lVar5 + 0x1ec8) = *(uint *)(lVar5 + 0x1ec8) & 0xfffffffe;
          return 1;
        }
        FUN_1804bee10("##Tooltip_Hidden",0,0x2030347);
        lVar3 = *(longlong *)(lVar3 + 0x14d0);
        *(undefined1 *)(lVar3 + 0xd1) = 1;
        *(undefined1 *)(lVar3 + 0xd4) = 1;
        *(undefined1 *)(lVar3 + 0xeb) = 1;
        *(uint *)(lVar5 + 0x1ec8) = *(uint *)(lVar5 + 0x1ec8) & 0xfffffffe;
        return 1;
      }
    }
  }
  return 0;
}



