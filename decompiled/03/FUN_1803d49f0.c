// FUN_1803d49f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d49f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803d49f0(void)

{
  char *pcVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  char **ppcVar10;
  undefined1 auStack_708 [32];
  undefined **local_6e8;
  char **local_6e0;
  undefined *local_6d8;
  char *local_6c8;
  longlong lStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  char *local_6a8;
  longlong lStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined1 local_688;
  char *local_678 [3];
  longlong local_660;
  undefined *local_658;
  longlong local_650;
  char *local_648;
  longlong local_640;
  char *local_638;
  longlong local_630;
  char local_628 [1536];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_708;
  if (DAT_180b0df98 != DAT_180b0dfa0) {
  }
  DAT_180c70e21 = 0;
  bVar2 = false;
  local_688 = 0;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar7 = DAT_1809ba4b0;
  lVar3 = DAT_1808da460;
  uVar9 = 1000;
  if ((DAT_1809ba4b0 != DAT_1808da460) || (lVar8 = DAT_180c71ee8, DAT_180c71ee8 == 0)) {
    UVar6 = GetTickCount64();
    if ((lVar7 == lVar3) && (UVar6 < DAT_180c71ee0)) {
      lVar8 = 0;
    }
    else {
      local_6d8 = &DAT_1809ba400;
      iVar5 = FUN_1805f68d0(&DAT_1809ba400);
      if (iVar5 != 0) goto LAB_1803d5ae4;
      if (DAT_1809ba44c == 0x7fffffff) {
        DAT_1809ba44c = 0x7ffffffe;
        goto LAB_1803d5ad9;
      }
      if (DAT_1809ba4b0 == lVar3) {
        if ((DAT_180c71ee8 == 0) && (DAT_180c71ee0 <= UVar6)) goto LAB_1803d4b4b;
      }
      else {
        DAT_1809ba450 = 1000;
LAB_1803d4b4b:
        lVar7 = -1;
        do {
          lStack_6c0 = lVar7 + 1;
          pcVar1 = "lient.dll:488D05*????????4D8BF8488901+80~" + lVar7;
          lVar7 = lStack_6c0;
        } while (*pcVar1 != '\0');
        local_6c8 = "client.dll:488D05*????????4D8BF8488901+80~";
        local_6a8 = "patterns::game_event_get_controller";
        lStack_6a0 = 0x23;
        DAT_180c71ee8 = FUN_1800e5d20(&local_6a8,&local_6c8);
        DAT_1809ba4b0 = lVar3;
        DAT_180c71ee0 = 0xffffffffffffffff;
        if (DAT_180c71ee8 == 0) {
          DAT_180c71ee0 = DAT_1809ba450 + UVar6;
          if (DAT_1809ba450 < 60000) {
            DAT_1809ba450 = DAT_1809ba450 * 2;
          }
          else {
            DAT_1809ba450 = 60000;
          }
        }
        else {
          DAT_1809ba450 = 1000;
        }
      }
      lVar8 = DAT_180c71ee8;
      FUN_1805f68fc(&DAT_1809ba400);
    }
  }
  local_678[0] = "controller";
  local_678[1] = (char *)lVar8;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar7 = DAT_1809ba3f8;
  lVar3 = DAT_1808da460;
  if ((DAT_1809ba3f8 != DAT_1808da460) || (lVar8 = DAT_180c71ec8, DAT_180c71ec8 == 0)) {
    UVar6 = GetTickCount64();
    if ((lVar7 == lVar3) && (UVar6 < DAT_180c71ed8)) {
      lVar8 = 0;
    }
    else {
      local_6d8 = &DAT_1809ba460;
      iVar5 = FUN_1805f68d0(&DAT_1809ba460);
      if (iVar5 != 0) goto LAB_1803d5ae4;
      if (DAT_1809ba4ac == 0x7fffffff) {
        DAT_1809ba4ac = 0x7ffffffe;
        goto LAB_1803d5ad9;
      }
      if (DAT_1809ba3f8 == lVar3) {
        if ((DAT_180c71ec8 == 0) && (DAT_180c71ed8 <= UVar6)) goto LAB_1803d4ccf;
      }
      else {
        DAT_1809ba458 = 1000;
LAB_1803d4ccf:
        lVar7 = -1;
        do {
          lStack_6a0 = lVar7 + 1;
          pcVar1 = "lient.dll:488D05*????????4D8BF8488901+88~" + lVar7;
          lVar7 = lStack_6a0;
        } while (*pcVar1 != '\0');
        local_6a8 = "client.dll:488D05*????????4D8BF8488901+88~";
        local_6c8 = "patterns::game_event_get_pawn";
        lStack_6c0 = 0x1d;
        DAT_180c71ec8 = FUN_1800e5d20(&local_6c8,&local_6a8);
        DAT_1809ba3f8 = lVar3;
        DAT_180c71ed8 = 0xffffffffffffffff;
        if (DAT_180c71ec8 == 0) {
          DAT_180c71ed8 = DAT_1809ba458 + UVar6;
          if (DAT_1809ba458 < 60000) {
            DAT_1809ba458 = DAT_1809ba458 * 2;
          }
          else {
            DAT_1809ba458 = 60000;
          }
        }
        else {
          DAT_1809ba458 = 1000;
        }
      }
      lVar8 = DAT_180c71ec8;
      FUN_1805f68fc(&DAT_1809ba460);
    }
  }
  local_678[2] = "pawn";
  local_660 = lVar8;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar7 = DAT_1809ba398;
  lVar3 = DAT_1808da460;
  if ((DAT_1809ba398 != DAT_1808da460) || (lVar8 = DAT_180c71ed0, DAT_180c71ed0 == 0)) {
    UVar6 = GetTickCount64();
    if ((lVar7 == lVar3) && (UVar6 < DAT_180c71eb0)) {
      lVar8 = 0;
    }
    else {
      local_6d8 = &DAT_1809ba340;
      iVar5 = FUN_1805f68d0(&DAT_1809ba340);
      if (iVar5 != 0) goto LAB_1803d5ae4;
      if (DAT_1809ba38c == 0x7fffffff) {
        DAT_1809ba38c = 0x7ffffffe;
        goto LAB_1803d5ad9;
      }
      if (DAT_1809ba398 == lVar3) {
        if ((DAT_180c71ed0 == 0) && (DAT_180c71eb0 <= UVar6)) goto LAB_1803d4e4f;
      }
      else {
        DAT_1809ba390 = 1000;
LAB_1803d4e4f:
        lVar7 = -1;
        do {
          lStack_6a0 = lVar7 + 1;
          lVar8 = lVar7 + 1;
          lVar7 = lStack_6a0;
        } while ("client.dll:>E8????????3D00800000"[lVar8] != '\0');
        local_6a8 = "client.dll:>E8????????3D00800000";
        local_6c8 = "patterns::game_event_get_int";
        lStack_6c0 = 0x1c;
        DAT_180c71ed0 = FUN_1800e5d20(&local_6c8,&local_6a8);
        DAT_1809ba398 = lVar3;
        DAT_180c71eb0 = 0xffffffffffffffff;
        if (DAT_180c71ed0 == 0) {
          DAT_180c71eb0 = DAT_1809ba390 + UVar6;
          if (DAT_1809ba390 < 60000) {
            DAT_1809ba390 = DAT_1809ba390 * 2;
          }
          else {
            DAT_1809ba390 = 60000;
          }
        }
        else {
          DAT_1809ba390 = 1000;
        }
      }
      lVar8 = DAT_180c71ed0;
      FUN_1805f68fc(&DAT_1809ba340);
    }
  }
  local_658 = &DAT_180811ca4;
  local_650 = lVar8;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar7 = DAT_1809ba3f0;
  lVar3 = DAT_1808da460;
  if ((DAT_1809ba3f0 != DAT_1808da460) || (lVar8 = DAT_180c71ec0, DAT_180c71ec0 == 0)) {
    UVar6 = GetTickCount64();
    if ((lVar7 == lVar3) && (UVar6 < DAT_180c71eb8)) {
      lVar8 = 0;
    }
    else {
      local_6d8 = &DAT_1809ba3a0;
      iVar5 = FUN_1805f68d0(&DAT_1809ba3a0);
      if (iVar5 != 0) goto LAB_1803d5ae4;
      if (DAT_1809ba3ec == 0x7fffffff) {
        DAT_1809ba3ec = 0x7ffffffe;
        goto LAB_1803d5ad9;
      }
      if (DAT_1809ba3f0 == lVar3) {
        if ((DAT_180c71ec0 == 0) && (DAT_180c71eb8 <= UVar6)) goto LAB_1803d4fcf;
      }
      else {
        DAT_1809ba2d8 = 1000;
LAB_1803d4fcf:
        lVar7 = -1;
        do {
          lStack_6a0 = lVar7 + 1;
          lVar8 = lVar7 + 1;
          lVar7 = lStack_6a0;
        } while ("client.dll:>E8????????0F28D8895C2420"[lVar8] != '\0');
        local_6a8 = "client.dll:>E8????????0F28D8895C2420";
        local_6c8 = "patterns::game_event_get_float";
        lStack_6c0 = 0x1e;
        DAT_180c71ec0 = FUN_1800e5d20(&local_6c8,&local_6a8);
        DAT_1809ba3f0 = lVar3;
        DAT_180c71eb8 = 0xffffffffffffffff;
        if (DAT_180c71ec0 == 0) {
          DAT_180c71eb8 = DAT_1809ba2d8 + UVar6;
          if (DAT_1809ba2d8 < 60000) {
            DAT_1809ba2d8 = DAT_1809ba2d8 * 2;
          }
          else {
            DAT_1809ba2d8 = 60000;
          }
        }
        else {
          DAT_1809ba2d8 = 1000;
        }
      }
      lVar8 = DAT_180c71ec0;
      FUN_1805f68fc(&DAT_1809ba3a0);
    }
  }
  local_648 = "float";
  local_640 = lVar8;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar7 = DAT_1809ba2d0;
  lVar3 = DAT_1808da460;
  if ((DAT_1809ba2d0 == DAT_1808da460) && (lVar8 = DAT_180c71ea0, DAT_180c71ea0 != 0))
  goto LAB_1803d51dd;
  UVar6 = GetTickCount64();
  if ((lVar7 == lVar3) && (UVar6 < DAT_180c71e98)) {
    lVar8 = 0;
    goto LAB_1803d51dd;
  }
  local_6d8 = &DAT_1809ba2e0;
  iVar5 = FUN_1805f68d0(&DAT_1809ba2e0);
  if (iVar5 != 0) {
LAB_1803d5ae4:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1809ba32c == 0x7fffffff) {
    DAT_1809ba32c = 0x7ffffffe;
LAB_1803d5ad9:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_1809ba2d0 == lVar3) {
    if ((DAT_180c71ea0 == 0) && (DAT_180c71e98 <= UVar6)) goto LAB_1803d5144;
  }
  else {
    DAT_1809ba330 = 1000;
LAB_1803d5144:
    lVar7 = -1;
    do {
      lStack_6a0 = lVar7 + 1;
      pcVar1 = "lient.dll:488D05*????????4D8BF8488901+50~" + lVar7;
      lVar7 = lStack_6a0;
    } while (*pcVar1 != '\0');
    local_6a8 = "client.dll:488D05*????????4D8BF8488901+50~";
    local_6c8 = "patterns::game_event_get_string";
    lStack_6c0 = 0x1f;
    DAT_180c71ea0 = FUN_1800e5d20(&local_6c8,&local_6a8);
    DAT_1809ba2d0 = lVar3;
    DAT_180c71e98 = 0xffffffffffffffff;
    if (DAT_180c71ea0 == 0) {
      DAT_180c71e98 = UVar6 + DAT_1809ba330;
      uVar9 = DAT_1809ba330 * 2;
      if (59999 < DAT_1809ba330) {
        uVar9 = 60000;
      }
    }
    DAT_1809ba330 = uVar9;
  }
  lVar8 = DAT_180c71ea0;
  FUN_1805f68fc(&DAT_1809ba2e0);
LAB_1803d51dd:
  local_638 = "string";
  local_630 = lVar8;
  ppcVar10 = local_678;
  do {
    cVar4 = FUN_1804513c0(ppcVar10[1],1,2);
    if (cVar4 == '\0') {
      FUN_18063ab10(local_628,0,0x600);
      local_6e8 = (undefined **)*ppcVar10;
      FUN_18015ad60(local_628,0x600,0xffffffffffffffff,"reader=%s reason=unavailable");
      local_6e8 = &PTR_180700558;
      if (local_628[0] != '\0') {
        local_6e8 = (undefined **)&DAT_1806bcfc0;
      }
      local_6e0 = (char **)local_628;
      FUN_1800f6900(3,&DAT_1806bcfc0,"Events","EVENT_INITIALIZATION_FAILURE");
      goto LAB_1803d5abc;
    }
    ppcVar10 = ppcVar10 + 2;
  } while (ppcVar10 != (char **)local_628);
  local_6a8 = (char *)0xdb35e39b27e1c185;
  local_6d8 = (undefined *)0xa05181ee77d57a06;
  lStack_6a0 = -0x5fae7e11882a85fa;
  local_6c8 = (char *)0x695f74656c6c7562;
  lStack_6c0 = 0x746361706d;
  cVar4 = FUN_1803d6010(&local_6c8,FUN_1803d5b10);
  if (cVar4 != '\0') {
    local_6a8 = (char *)0xdb35e39b27e1c185;
    local_6d8 = (undefined *)0xa05181ee77d57a06;
    lStack_6a0 = -0x5fae7e11882a85fa;
    local_6c8 = (char *)0x685f726579616c70;
    lStack_6c0 = 0x747275;
    cVar4 = FUN_1803d6010(&local_6c8,FUN_1803d5b20);
    if (cVar4 != '\0') {
      local_6a8 = (char *)0xdb35e39b27e1c185;
      local_6d8 = (undefined *)0xa05181ee77d57a06;
      lStack_6a0 = -0x5fae7e11882a85fa;
      local_6c8 = (char *)0x665f6e6f70616577;
      lStack_6c0 = 0x657269;
      cVar4 = FUN_1803d6010(&local_6c8,FUN_1803d5b30);
      if (cVar4 != '\0') {
        local_6a8 = (char *)0xdb35e39b27e1c185;
        local_6d8 = (undefined *)0xa05181ee77d57a06;
        lStack_6a0 = -0x5fae7e11882a85fa;
        local_6c8 = (char *)0x766d5f646e756f72;
        lStack_6c0 = 0x70;
        cVar4 = FUN_1803d6010(&local_6c8,FUN_1803d5b40);
        if (cVar4 != '\0') {
          local_6a8 = (char *)0xdb35e39b27e1c185;
          local_6d8 = (undefined *)0xa05181ee77d57a06;
          lStack_6a0 = -0x5fae7e11882a85fa;
          local_6c8 = (char *)0x7275705f6d657469;
          lStack_6c0 = 0x6573616863;
          cVar4 = FUN_1803d6010(&local_6c8,FUN_1803d5b50);
          if (cVar4 != '\0') {
            local_6a8 = (char *)0xdb35e39b27e1c185;
            local_6d8 = (undefined *)0xa05181ee77d57a06;
            lStack_6a0 = -0x5fae7e11882a85fa;
            local_6c8 = (char *)0x74735f646e756f72;
            lStack_6c0 = 0x747261;
            cVar4 = FUN_1803d6010(&local_6c8,FUN_1803d5b60);
            if (cVar4 != '\0') {
              local_6a8 = (char *)0xdb35e39b27e1c185;
              local_6d8 = (undefined *)0xa05181ee77d57a06;
              lStack_6a0 = -0x5fae7e11882a85fa;
              local_6c8 = (char *)0x645f726579616c70;
              lStack_6c0 = 0x68746165;
              cVar4 = FUN_1803d6010(&local_6c8,FUN_1803d5d70);
              if (cVar4 != '\0') {
                local_6a8 = (char *)0xdb35e39b27e1c185;
                local_6d8 = (undefined *)0xa05181ee77d57a06;
                lStack_6a0 = 0xa05181ee77d57a06;
                local_6c8 = (char *)0x6765625f626d6f62;
                lStack_6c0 = 0x746e616c706e69;
                FUN_1803d6010(&local_6c8,FUN_1803d5d90);
                local_6a8 = (char *)0xdb35e39b27e1c185;
                local_6d8 = (undefined *)0xa05181ee77d57a06;
                lStack_6a0 = 0xa05181ee77d57a06;
                local_6c8 = (char *)0x6f62615f626d6f62;
                lStack_6c0 = 0x746e616c707472;
                FUN_1803d6010(&local_6c8,FUN_1803d5da0);
                local_6a8 = (char *)0xdb35e39b27e1c185;
                local_6d8 = (undefined *)0xa05181ee77d57a06;
                lStack_6a0 = 0xa05181ee77d57a06;
                local_6c8 = (char *)0x6f72645f626d6f62;
                lStack_6c0 = 0x64657070;
                FUN_1803d6010(&local_6c8,FUN_1803d5da0);
                local_6a8 = (char *)0xdb35e39b27e1c185;
                local_6d8 = (undefined *)0xa05181ee77d57a06;
                lStack_6a0 = 0xa05181ee77d57a06;
                local_6c8 = (char *)0x616c705f626d6f62;
                lStack_6c0 = 0x6465746e;
                FUN_1803d6010(&local_6c8,FUN_1803d5da0);
                local_6c8 = (char *)0xdb35e39b27e1c185;
                lStack_6c0 = 0xa05181ee77d57a06;
                local_6b8 = 0x929654b1461b7377;
                local_6d8 = (undefined *)0xa5cea54bfef7110;
                uStack_6b0 = 0xa5cea54bfef7110;
                local_6a8 = (char *)0x6765625f626d6f62;
                lStack_6a0 = 0x6573756665646e69;
                local_698 = 0;
                uStack_690 = 0;
                FUN_1803d6010(&local_6a8,FUN_1803d5db0);
                local_6c8 = (char *)0xdb35e39b27e1c185;
                lStack_6c0 = 0xa05181ee77d57a06;
                local_6b8 = 0x929654b1461b7377;
                local_6d8 = (undefined *)0xa5cea54bfef7110;
                uStack_6b0 = 0xa5cea54bfef7110;
                local_6a8 = (char *)0x6f62615f626d6f62;
                lStack_6a0 = 0x6573756665647472;
                local_698 = 0;
                uStack_690 = 0;
                FUN_1803d6010(&local_6a8,FUN_1803d5dc0);
                local_6a8 = (char *)0xdb35e39b27e1c185;
                local_6d8 = (undefined *)0xa05181ee77d57a06;
                lStack_6a0 = 0xa05181ee77d57a06;
                local_6c8 = (char *)0x6665645f626d6f62;
                lStack_6c0 = 0x64657375;
                FUN_1803d6010(&local_6c8,thunk_FUN_180285200);
                local_6a8 = (char *)0xdb35e39b27e1c185;
                local_6d8 = (undefined *)0xa05181ee77d57a06;
                lStack_6a0 = -0x5fae7e11882a85fa;
                local_6c8 = (char *)0x7078655f626d6f62;
                lStack_6c0 = 0x6465646f6c;
                FUN_1803d6010(&local_6c8,thunk_FUN_180285200);
                bVar2 = true;
                DAT_180c70e21 = 1;
                FUN_18063ab10(local_628,0,0x600);
                local_6e8 = (undefined **)(DAT_180b0dfa0 - DAT_180b0df98 >> 3);
                FUN_18015ad60(local_628,0x600,0xffffffffffffffff,"listeners=%zu readers=5");
                local_6e8 = &PTR_180700558;
                if (local_628[0] != '\0') {
                  local_6e8 = (undefined **)&DAT_1806bcfc0;
                }
                local_6e0 = (char **)local_628;
                FUN_1800f6900(1,local_6e0,"Events","EVENT_INITIALIZATION_SUCCESS");
              }
            }
          }
        }
      }
    }
  }
LAB_1803d5abc:
  if (!bVar2) {
    FUN_1803d5e60();
  }
}



