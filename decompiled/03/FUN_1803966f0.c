// FUN_1803966f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803966f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803966f0(longlong param_1,byte param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  DWORD dwTlsIndex;
  undefined8 *puVar3;
  BOOL BVar4;
  int iVar5;
  longlong *lpTlsValue;
  longlong lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 auStack_818 [32];
  undefined **local_7f8;
  char *local_7f0;
  uint local_7e8;
  uint local_7e0;
  uint local_7d8;
  uint local_7d0;
  uint local_7c8;
  longlong local_7c0;
  int local_7b8;
  int local_7b0;
  int local_7a8;
  int local_7a0;
  double local_798;
  double local_790;
  undefined4 local_788;
  undefined4 local_780;
  undefined8 local_778;
  undefined8 local_770;
  undefined8 local_768;
  uint local_760;
  undefined4 local_758;
  undefined8 local_750;
  undefined8 local_748;
  undefined8 local_740;
  undefined4 local_738;
  double local_730;
  double local_728;
  double local_720;
  double local_718;
  double local_710;
  double local_708;
  byte local_6f8;
  byte local_6f7;
  byte local_6f6;
  byte local_6f5;
  undefined4 local_6f4;
  undefined4 local_6f0;
  longlong *local_6e8;
  code *local_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 local_6c8;
  longlong local_6c0;
  longlong local_6b8;
  undefined7 uStack_69f;
  char local_698 [1536];
  ulonglong local_98;
  
  if (param_1 == 0) {
    return;
  }
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_818;
  local_6f5 = param_2;
  if ((DAT_1809031b8 != 0xffffffff) ||
     (BVar4 = InitOnceExecuteOnce((PINIT_ONCE)&DAT_180c710e8,FUN_1803a7840,(PVOID)0x0,(LPVOID *)0x0)
     , BVar4 != 0)) {
    dwTlsIndex = DAT_1809031b8;
    lpTlsValue = TlsGetValue(DAT_1809031b8);
    if (lpTlsValue != (longlong *)0x0) goto LAB_1803968b1;
    lpTlsValue = (longlong *)FUN_1805f6194(0x18,&DAT_1806898a0);
    if (lpTlsValue != (longlong *)0x0) {
      *lpTlsValue = -1;
      lpTlsValue[1] = 0;
      *(undefined1 *)(lpTlsValue + 2) = 0;
      BVar4 = TlsSetValue(dwTlsIndex,lpTlsValue);
      if (BVar4 != 0) {
        iVar5 = FUN_1805f68d0(&DAT_1808d9bf0);
        puVar3 = DAT_180b0b2f0;
        if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808d9c3c == 0x7fffffff) {
          DAT_1808d9c3c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        local_6e0 = FUN_1801b3980;
        local_6e8 = lpTlsValue;
        if (DAT_180b0b2f0 == DAT_180b0b2f8) {
          FUN_1801bc530(&DAT_180b0b2e8,DAT_180b0b2f0,&local_6e8);
          FUN_1805f68fc(&DAT_1808d9bf0);
        }
        else {
          *DAT_180b0b2f0 = lpTlsValue;
          puVar3[1] = FUN_1801b3980;
          DAT_180b0b2f0 = DAT_180b0b2f0 + 2;
          FUN_1805f68fc(&DAT_1808d9bf0);
        }
        goto LAB_1803968b1;
      }
    }
    if (DAT_180c7df30 == 0) {
      local_6e8 = (longlong *)0x180827288;
      local_6e0 = (code *)0x15;
      DAT_180c7df30 = FUN_180451750(&local_6e8);
    }
    (**(code **)(**(longlong **)DAT_180c7df30 + 0x18))();
  }
  lpTlsValue = (longlong *)0x0;
LAB_1803968b1:
  plVar10 = (longlong *)&DAT_1809031c8;
  if (lpTlsValue != (longlong *)0x0) {
    plVar10 = lpTlsValue;
  }
  if ((DAT_180b8fffc == '\0') && (DAT_180b90028 == 0)) {
    local_6f6 = 0;
    if ((DAT_1808fedf1 == 0) && (local_6f6 = 0, *plVar10 != *(longlong *)(param_1 + 8))) {
    }
  }
  else {
    local_6f6 = 1;
  }
  local_6f7 = DAT_180b90028;
  local_6f8 = DAT_1808fedf1;
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  puVar8 = (undefined4 *)0x0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    puVar8 = (undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x10);
  }
  if ((puVar8 != (undefined4 *)0x0) && ((int)puVar8[4] < 0x21)) {
    local_6e8 = plVar10;
    local_6c0 = FUN_180396470(param_1);
    local_7b8 = 0;
    local_7b0 = 0;
    local_7a8 = 0;
    local_7a0 = 0;
    auVar15 = ZEXT464(0xbf800000);
    auVar16 = ZEXT1664(auVar15._0_16_);
    uVar9 = 0;
    if ((longlong)(int)puVar8[4] != 0) {
      do {
        lVar1 = *(longlong *)(*(longlong *)(puVar8 + 6) + 8 + (longlong)(int)uVar9 * 8);
        lVar6 = 0;
        if (lVar1 != 0) {
          lVar6 = lVar1 + 0x10;
        }
        if ((lVar6 != 0) && (uVar2 = *(ulonglong *)(lVar6 + 8), (uVar2 & 6) != 0)) {
          if ((uVar2 & 2) != 0) {
            if (*(char *)(lVar6 + 0x10) == '\0') {
              local_7b0 = local_7b0 + 1;
            }
            else {
              local_7b8 = local_7b8 + 1;
              auVar15 = ZEXT1664(ZEXT416(*(uint *)(lVar6 + 0x14)));
            }
          }
          if ((uVar2 & 4) != 0) {
            if (*(char *)(lVar6 + 0x10) == '\0') {
              local_7a0 = local_7a0 + 1;
              auVar16 = ZEXT1664(ZEXT416(*(uint *)(lVar6 + 0x14)));
            }
            else {
              local_7a8 = local_7a8 + 1;
            }
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulonglong)(longlong)(int)puVar8[4]);
    }
    local_6b8 = *plVar10;
    if (((local_6b8 != *(longlong *)(param_1 + 8)) || (plVar10[1] != local_6c0)) ||
       (*(byte *)(plVar10 + 2) != local_6f5)) {
      puVar11 = (undefined4 *)0x0;
      if (*(longlong *)(puVar8 + 10) != 0) {
        puVar11 = (undefined4 *)(*(longlong *)(puVar8 + 10) + 0x10);
      }
      puVar7 = (undefined4 *)0x0;
      if (*(longlong *)(puVar8 + 0xc) != 0) {
        puVar7 = (undefined4 *)(*(longlong *)(puVar8 + 0xc) + 0x10);
      }
      if (puVar7 == (undefined4 *)0x0) {
        auVar12 = ZEXT464(0x7fc00000);
        auVar14 = ZEXT1664(auVar12._0_16_);
        auVar13 = ZEXT1664(auVar12._0_16_);
        local_6f4 = 0;
      }
      else {
        local_6f4 = *puVar7;
        auVar12 = ZEXT464((uint)puVar7[2]);
        auVar13 = ZEXT464((uint)puVar7[3]);
        auVar14 = ZEXT464((uint)puVar7[4]);
      }
      if (puVar11 == (undefined4 *)0x0) {
        local_6d8 = 0;
        local_6d0 = 0;
        local_6c8 = 0;
        local_6f0 = 0;
      }
      else {
        local_6f0 = *puVar11;
        local_6c8 = *(undefined8 *)(puVar11 + 2);
        local_6d0 = *(undefined8 *)(puVar11 + 4);
        local_6d8 = *(undefined8 *)(puVar11 + 6);
      }
      FUN_18063ab10(local_698,0,0x600);
      lVar1 = local_6c0;
      local_708 = (double)(float)puVar8[0x14];
      local_710 = (double)(float)puVar8[0x13];
      local_718 = (double)(float)puVar8[0x12];
      local_720 = (double)auVar14._0_4_;
      local_728 = (double)auVar13._0_4_;
      local_730 = (double)auVar12._0_4_;
      local_790 = (double)auVar16._0_4_;
      local_798 = (double)auVar15._0_4_;
      local_7f8 = *(undefined ***)(param_1 + 8);
      local_738 = local_6f4;
      local_740 = local_6d8;
      local_748 = local_6d0;
      local_750 = local_6c8;
      local_758 = local_6f0;
      local_760 = (uint)(puVar11 != (undefined4 *)0x0);
      local_768 = *(undefined8 *)(param_1 + 0x70);
      local_770 = *(undefined8 *)(param_1 + 0x68);
      local_778 = *(undefined8 *)(param_1 + 0x60);
      local_780 = *puVar8;
      local_788 = *(undefined4 *)(param_1 + 0x8c);
      local_7c0 = local_6c0;
      local_7c8 = (uint)local_6f5;
      local_7d0 = (uint)local_6f8;
      local_7d8 = (uint)local_6f7;
      local_7e0 = (uint)local_6f6;
      local_7e8 = (uint)((undefined **)local_6b8 == local_7f8);
      local_7f0 = (char *)CONCAT44(local_7f0._4_4_,puVar8[0x11]);
      FUN_18015ad60(local_698,0x600,0xffffffffffffffff,
                    "command=%lld client_tick=%d duplicate=%d jumpbug=%d no_land=%d bhop=%d crc_prepared=%d signature=0x%llx jump_edges=(%d,%d) duck_edges=(%d,%d) jump_when=%.5f stand_when=%.5f flag=%d base_bits=0x%x raw_buttons=(0x%llx,0x%llx,0x%llx) pb_present=%d pb_bits=0x%x pb_buttons=(0x%llx,0x%llx,0x%llx) view_bits=0x%x view=(%.5f,%.5f,%.5f) wish=(%.5f,%.5f,%.5f) signature_scope=movement_buttons_view_analog server_ack=0"
                   );
      local_7f8 = &PTR_180700558;
      if (local_698[0] != '\0') {
        local_7f8 = (undefined **)&DAT_1806bcfc0;
      }
      local_7f0 = local_698;
      FUN_1800f6900(0);
      *local_6e8 = *(longlong *)(param_1 + 8);
      local_6e8[1] = lVar1;
      local_6e8[2] = CONCAT71(uStack_69f,local_6f5);
    }
  }
}



