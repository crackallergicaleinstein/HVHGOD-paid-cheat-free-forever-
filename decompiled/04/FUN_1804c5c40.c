// FUN_1804c5c40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c5c40 */

void FUN_1804c5c40(void)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar3 = DAT_180bb8ae8;
  uVar10 = 0;
  if (*(int *)(DAT_180bb8ae8 + 0x1530) != 0) {
    if (*(char *)(DAT_180bb8ae8 + 300) == '\0') {
      *(undefined4 *)(DAT_180bb8ae8 + 0x28c8) = *(undefined4 *)(DAT_180bb8ae8 + 0x1540);
    }
    if (*(char *)(lVar3 + 0x2909) == '\0') {
      cVar4 = FUN_1804c5ef0();
      if (cVar4 != '\0') {
        FUN_1804f4780("Programmer error: %d visible items with conflicting ID!",
                      *(undefined4 *)(lVar3 + 0x28c8));
        FUN_1804f4970(
                     "Code should use PushID()/PopID() in loops, or append \"##xx\" to same-label identifiers!"
                     );
        FUN_1804f4970(
                     "Empty label e.g. Button(\"\") == same ID as parent widget/node. Use Button(\"##xx\") instead!"
                     );
        FUN_1804f4970(
                     "Set io.ConfigDebugHighlightIdConflicts=false to disable this warning in non-programmers builds."
                     );
        lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
        if (*(char *)(lVar1 + 0xd1) == '\0') {
          iVar5 = 2 - (uint)(*(int *)(lVar1 + 0x1d4) != 0);
          if (*(longlong *)(lVar1 + 0x1c8) != 0) {
            iVar5 = 6 - (uint)(*(int *)(lVar1 + 0x1d4) != 0);
          }
          auVar2 = vmaxss_avx(ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xd84)),ZEXT416(0x3f800000));
          FUN_1804f7030(iVar5,auVar2._0_8_);
        }
        if (*(char *)(lVar3 + 0xb2) == '\0') {
          pcVar7 = "(Hold Ctrl to: ";
        }
        else {
          FUN_1804f4780("(Hold Ctrl to: use ");
          FUN_1804c65b0(0,0);
          lVar1 = DAT_180bb8ae8;
          uVar9 = *(undefined4 *)(DAT_180bb8ae8 + 0xcc8);
          *(undefined4 *)(DAT_180bb8ae8 + 0xcc8) = 0;
          local_res8 = uVar10;
          local_resc = uVar10;
          cVar4 = FUN_1804f54a0("Item Picker",&local_res8);
          *(undefined4 *)(lVar1 + 0xcc8) = uVar9;
          if (cVar4 != '\0') {
            *(undefined1 *)(DAT_180bb8ae8 + 0x2909) = 1;
          }
          FUN_1804c65b0(0,0);
          pcVar7 = " to break in item call-stack, or ";
        }
        FUN_1804f4780(pcVar7);
        FUN_1804c65b0(0,0);
        FUN_1804f6d90();
        FUN_1804c65b0(0,0);
        FUN_1804f4780(&DAT_18081ea50);
        FUN_1804c14e0();
      }
    }
  }
  if (0 < *(int *)(lVar3 + 0x28a4)) {
    cVar4 = FUN_1804c5ef0();
    if (cVar4 != '\0') {
      lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
      if (*(char *)(lVar1 + 0xd1) == '\0') {
        iVar5 = *(int *)(lVar1 + 0x1d4);
        iVar6 = 2 - (uint)(iVar5 != 0);
        if (*(longlong *)(lVar1 + 0x1c8) != 0) {
          bVar8 = iVar5 != 0;
          iVar5 = -iVar5;
          iVar6 = 6 - (uint)bVar8;
        }
        auVar2 = vmaxss_avx(ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xd84)),ZEXT416(0x3f800000));
        FUN_1804f7030(iVar6,auVar2._0_8_,iVar5);
      }
      FUN_1804f4780("(Hold Ctrl to: ");
      FUN_1804c65b0(0,0);
      lVar1 = DAT_180bb8ae8;
      uVar9 = *(undefined4 *)(DAT_180bb8ae8 + 0xcc8);
      *(undefined4 *)(DAT_180bb8ae8 + 0xcc8) = 0;
      local_res8 = uVar10;
      local_resc = uVar10;
      cVar4 = FUN_1804f54a0("Enable Asserts",&local_res8);
      *(undefined4 *)(lVar1 + 0xcc8) = uVar9;
      if (cVar4 != '\0') {
        *(undefined1 *)(lVar3 + 0xad) = 1;
      }
      FUN_1804c65b0(0,0);
      FUN_1804f4780(&DAT_18081ea50);
      FUN_1804c14e0();
    }
  }
  return;
}



