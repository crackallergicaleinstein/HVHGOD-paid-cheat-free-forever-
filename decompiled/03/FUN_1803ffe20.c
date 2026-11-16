// FUN_1803ffe20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ffe20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803ffe20(longlong *param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ULONGLONG UVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 auStack_698 [32];
  undefined **local_678;
  char *local_670;
  undefined4 local_668;
  uint local_660;
  uint local_658;
  uint local_650;
  longlong local_648 [2];
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_698;
  plVar7 = (longlong *)FUN_180416b80();
  lVar3 = *plVar7;
  if (lVar3 == 0) {
    uVar11 = 0;
  }
  else {
    FUN_18017bf40(local_648);
    plVar7 = (longlong *)(lVar3 + (ulonglong)*(uint *)(lVar3 + 0x20) * 8 + 0x28);
    *plVar7 = *plVar7 + (local_648[0] - *(longlong *)(lVar3 + 0x18));
    uVar11 = *(undefined4 *)(lVar3 + 0x20);
    *(undefined4 *)(lVar3 + 0x20) = 0xc;
    *(longlong *)(lVar3 + 0x18) = local_648[0];
  }
  iVar6 = FUN_1803fa240(param_1 + 1);
  *(bool *)(*param_1 + 0x6d) = iVar6 == 3;
  if ((char)param_1[0x80f] == '\0') {
    *(undefined1 *)(param_1 + 0x80f) = 1;
    bVar5 = 1 < iVar6 - 2U;
    if (bVar5) {
      lVar8 = 2 - (ulonglong)(iVar6 != 0);
    }
    else {
      lVar8 = 0;
    }
    puVar1 = &DAT_180c7d650 + lVar8;
    UVar9 = GetTickCount64();
    uVar4 = *puVar1;
    if (uVar4 <= UVar9) {
      LOCK();
      uVar2 = *puVar1;
      if (uVar4 == uVar2) {
        *puVar1 = UVar9 + 2000;
      }
      UNLOCK();
      if (uVar4 == uVar2) {
        lVar8 = *param_1;
        if ((char)param_1[0xc] == '\0') {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined4 *)((longlong)param_1 + 0x5c);
        }
        switch(iVar6) {
        case 0:
          pcVar10 = "unavailable";
          break;
        case 1:
          pcVar10 = "pending";
          break;
        case 2:
          pcVar10 = "unchanged";
          break;
        case 3:
          pcVar10 = "restored";
          break;
        case 4:
          pcVar10 = "binding_changed";
          break;
        case 5:
          pcVar10 = "read_failed";
          break;
        case 6:
          pcVar10 = "write_failed";
          break;
        default:
          pcVar10 = "unknown";
        }
        FUN_18063ab10(local_638,0,0x600);
        local_650 = (uint)*(byte *)(lVar8 + 0x6d);
        local_678 = *(undefined ***)(lVar8 + 0x60);
        uVar13 = (uint)!bVar5;
        local_660 = (uint)(iVar6 != 0);
        local_670 = pcVar10;
        local_668 = uVar12;
        local_658 = uVar13;
        FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                      "command=%lld status=%s bones=%d captured=%d restored=%d copied=%d same_binding_required=1 render_buffer_writes=0 graph_heap_writes=0 native_updates=untouched"
                     );
        local_678 = &PTR_180700558;
        if (local_638[0] != '\0') {
          local_678 = (undefined **)&DAT_1806bcfc0;
        }
        local_670 = local_638;
        FUN_1800f6900((uVar13 ^ 1) * 2);
      }
    }
  }
  if (lVar3 != 0) {
    FUN_18017bf40(local_648);
    plVar7 = (longlong *)(lVar3 + (ulonglong)*(uint *)(lVar3 + 0x20) * 8 + 0x28);
    *plVar7 = *plVar7 + (local_648[0] - *(longlong *)(lVar3 + 0x18));
    *(longlong *)(lVar3 + 0x18) = local_648[0];
    *(undefined4 *)(lVar3 + 0x20) = uVar11;
  }
}



