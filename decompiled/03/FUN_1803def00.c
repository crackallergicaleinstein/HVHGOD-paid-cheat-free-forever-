// FUN_1803def00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803def00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803def00(void)

{
  undefined8 uVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  undefined *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  ULONGLONG UVar9;
  char *pcVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint *puVar15;
  uint *puVar16;
  undefined *puVar17;
  undefined1 auStack_6f8 [32];
  undefined **local_6d8;
  char *local_6d0;
  undefined8 local_6c8;
  undefined8 local_6c0;
  double local_6b8;
  char *local_6b0;
  uint local_6a8;
  char local_698;
  undefined *local_690;
  char *local_688;
  longlong local_680;
  undefined8 local_678;
  uint local_668;
  char *local_658;
  longlong local_650;
  undefined8 local_648;
  char local_638 [1544];
  ulonglong local_30;
  
  bVar4 = DAT_180c72008;
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_6f8;
  LOCK();
  DAT_180c72008 = 1;
  UNLOCK();
  if (DAT_180b0dfb0 == 0) {
    DAT_180c72008 = 1;
  }
  puVar16 = (uint *)0x0;
  if (*(longlong *)(DAT_180b0dfb0 + 0x40) != 0) {
    puVar16 = (uint *)(*(longlong *)(DAT_180b0dfb0 + 0x40) + 0x10);
  }
  if (puVar16 == (uint *)0x0) {
    DAT_180c72008 = 1;
  }
  local_668 = (uint)bVar4;
  lVar8 = FUN_18017ea70();
  *(char **)(lVar8 + 8) = "input apply: subtick movement";
  if ((DAT_180b0dfe8 != 0) &&
     (cVar6 = FUN_1803de710("input apply: subtick movement",DAT_180b0dfb0,1), cVar6 == '\0')) {
  }
  UVar9 = GetTickCount64();
  bVar3 = DAT_180b0dfe8;
  if (DAT_180c72000 <= UVar9) {
    DAT_180c72000 = UVar9 + 2000;
    uVar13 = (uint)DAT_180b0dfe8;
    FUN_18063ab10(local_638,0,0x600);
    local_6b0 = (char *)(double)DAT_180b0dfc8._4_4_;
    local_6b8 = (double)DAT_180b0dfe0;
    local_6a8 = (uint)(bVar3 == 0);
    local_6c0 = CONCAT44(local_6c0._4_4_,puVar16[4]);
    local_6c8 = CONCAT44(local_6c8._4_4_,DAT_180b0dfe4);
    local_6d0 = (char *)CONCAT44(local_6d0._4_4_,uVar13);
    local_6d8 = *(undefined ***)(DAT_180b0dfb0 + 8);
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                  "command=%lld owned=%d native_steps=%d submitted_steps=%d command_yaw=%.3f camera_yaw=%.3f native_timing_preserved=%d server_ack=unverified"
                 );
    local_6d8 = &PTR_180700558;
    if (local_638[0] != '\0') {
      local_6d8 = (undefined **)&DAT_1806bcfc0;
    }
    local_6d0 = local_638;
    FUN_1800f6900(0);
  }
  if (bVar4 == 0) {
    FUN_1800aa120("input apply: subtick movement complete");
  }
  lVar8 = FUN_18017ea70();
  *(char **)(lVar8 + 8) = "input apply: buttons";
  puVar15 = (uint *)0x0;
  if (*(longlong *)(puVar16 + 10) != 0) {
    puVar15 = (uint *)(*(longlong *)(puVar16 + 10) + 0x10);
  }
  local_658 = *(char **)(DAT_180b0dfb0 + 0x60);
  local_650 = *(longlong *)(DAT_180b0dfb0 + 0x68);
  local_648 = *(undefined8 *)(DAT_180b0dfb0 + 0x70);
  if (puVar15 == (uint *)0x0) {
    local_688 = (char *)0x0;
    local_680 = 0;
    local_678 = 0;
    uVar13 = 0;
  }
  else {
    local_688 = *(char **)(puVar15 + 2);
    local_680 = *(longlong *)(puVar15 + 4);
    local_678 = *(undefined8 *)(puVar15 + 6);
    uVar13 = *puVar15;
  }
  uVar11 = 0;
  lVar8 = 0;
  do {
    if (((*puVar16 & 2) == 0) || ((uVar13 >> (uVar11 & 0x1f) & 1) == 0)) {
      lVar12 = 0;
    }
    else {
      lVar12 = *(longlong *)(local_638 + lVar8 + -0x50);
    }
    if (lVar12 != *(longlong *)((longlong)&local_658 + lVar8)) {
      local_698 = '\x01';
      goto LAB_1803df14d;
    }
    uVar11 = uVar11 + 1;
    lVar8 = lVar8 + 8;
  } while (uVar11 < 3);
  local_698 = '\0';
LAB_1803df14d:
  if ((puVar15 == (uint *)0x0) && (local_698 != '\0')) {
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    if (puVar16 + -2 == (uint *)0x0) {
      bVar2 = false;
    }
    else {
      local_690 = (undefined *)0x0;
      cVar6 = FUN_1804514f0(&local_690,puVar16 + -2,8);
      if (cVar6 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    puVar5 = local_690;
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    if (bVar2) {
      puVar17 = (undefined *)((ulonglong)puVar5 & 0xfffffffffffffffc);
      if (((ulonglong)puVar5 & 1) != 0) {
        lVar8 = FUN_18017ea70();
        *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
        if (puVar17 == (undefined *)0x0) {
          bVar2 = false;
        }
        else {
          local_690 = (undefined *)0x0;
          cVar6 = FUN_1804514f0(&local_690,puVar17,8);
          if (cVar6 == '\0') {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
        }
        puVar5 = local_690;
        lVar8 = FUN_18017ea70();
        if (*(int *)(lVar8 + 4) != 0) {
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
        }
        puVar17 = (undefined *)0x0;
        if (bVar2) {
          puVar17 = puVar5;
        }
      }
    }
    else {
      puVar17 = (undefined *)0x0;
    }
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    lVar12 = DAT_1809bab80;
    lVar8 = DAT_1808da460;
    if ((DAT_1809bab80 != DAT_1808da460) || (lVar14 = DAT_180c72028, DAT_180c72028 == 0)) {
      UVar9 = GetTickCount64();
      if ((lVar12 == lVar8) && (UVar9 < DAT_180c72030)) goto LAB_1803df3dd;
      local_690 = &DAT_1809bab90;
      iVar7 = FUN_1805f68d0(&DAT_1809bab90);
      if (iVar7 != 0) goto LAB_1803df72b;
      if (DAT_1809babdc == 0x7fffffff) {
        DAT_1809babdc = 0x7ffffffe;
        goto LAB_1803df720;
      }
      if (DAT_1809bab80 == lVar8) {
        if ((DAT_180c72028 == 0) && (DAT_180c72030 <= UVar9)) goto LAB_1803df2ea;
      }
      else {
        DAT_1809baac0 = 1000;
LAB_1803df2ea:
        lVar12 = -1;
        do {
          local_650 = lVar12 + 1;
          lVar14 = lVar12 + 1;
          lVar12 = local_650;
        } while ("client.dll:488B54CA088D4101894708EB16488B0F>E8????????488BD0488BCF-80"[lVar14] !=
                 '\0');
        local_658 = "client.dll:488B54CA088D4101894708EB16488B0F>E8????????488BD0488BCF-80";
        local_688 = "patterns::button_state_alloc";
        local_680 = 0x1c;
        DAT_180c72028 = FUN_1800e5d20(&local_688,&local_658);
        DAT_1809bab80 = lVar8;
        DAT_180c72030 = 0xffffffffffffffff;
        if (DAT_180c72028 == 0) {
          DAT_180c72030 = DAT_1809baac0 + UVar9;
          if (DAT_1809baac0 < 60000) {
            DAT_1809baac0 = DAT_1809baac0 * 2;
          }
          else {
            DAT_1809baac0 = 60000;
          }
        }
        else {
          DAT_1809baac0 = 1000;
        }
      }
      lVar14 = DAT_180c72028;
      FUN_1805f68fc(&DAT_1809bab90);
      if (lVar14 == 0) goto LAB_1803df3dd;
    }
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    FUN_1801ad7c0(&local_688,lVar14,puVar17);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    pcVar10 = local_688;
    if ((char)local_680 == '\0') {
      pcVar10 = (char *)0x0;
    }
    if (pcVar10 != (char *)0x0) {
      *(char **)(puVar16 + 10) = pcVar10;
      puVar15 = (uint *)(pcVar10 + 0x10);
    }
  }
LAB_1803df3dd:
  if (((*(longlong *)(DAT_180b0dfb0 + 0x60) == 0) && (*(longlong *)(DAT_180b0dfb0 + 0x68) == 0)) &&
     (*(longlong *)(DAT_180b0dfb0 + 0x70) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (puVar15 != (uint *)0x0) {
    if (local_698 != '\0') {
      *puVar16 = *puVar16 | 2;
      uVar1 = *(undefined8 *)(DAT_180b0dfb0 + 0x60);
      *puVar15 = *puVar15 | 1;
      uVar13 = *puVar15;
      *(undefined8 *)(puVar15 + 2) = uVar1;
      uVar1 = *(undefined8 *)(DAT_180b0dfb0 + 0x68);
      *puVar15 = uVar13 | 2;
      *(undefined8 *)(puVar15 + 4) = uVar1;
      uVar1 = *(undefined8 *)(DAT_180b0dfb0 + 0x70);
      *puVar15 = uVar13 | 6;
      *(undefined8 *)(puVar15 + 6) = uVar1;
    }
    goto LAB_1803df67c;
  }
  if (!bVar2) goto LAB_1803df67c;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar12 = DAT_1809baac8;
  lVar8 = DAT_1808da460;
  if ((DAT_1809baac8 != DAT_1808da460) || (lVar14 = DAT_180c71ff0, DAT_180c71ff0 == 0)) {
    UVar9 = GetTickCount64();
    if ((lVar12 == lVar8) && (UVar9 < DAT_180c71ff8)) {
      lVar14 = 0;
    }
    else {
      local_690 = &DAT_1809baae0;
      iVar7 = FUN_1805f68d0(&DAT_1809baae0);
      if (iVar7 != 0) {
LAB_1803df72b:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809bab2c == 0x7fffffff) {
        DAT_1809bab2c = 0x7ffffffe;
LAB_1803df720:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if (DAT_1809baac8 == lVar8) {
        if ((DAT_180c71ff0 == 0) && (DAT_180c71ff8 <= UVar9)) goto LAB_1803df528;
      }
      else {
        DAT_1809baad0 = 1000;
LAB_1803df528:
        lVar12 = -1;
        do {
          local_680 = lVar12 + 1;
          lVar14 = lVar12 + 1;
          lVar12 = local_680;
        } while ("client.dll:488B54CA088D4101894708EB16488B0F>E8????????488BD0488BCF-80"[lVar14] !=
                 '\0');
        local_688 = "client.dll:488B54CA088D4101894708EB16488B0F>E8????????488BD0488BCF-80";
        local_658 = "patterns::button_state_alloc";
        local_650 = 0x1c;
        DAT_180c71ff0 = FUN_1800e5d20(&local_658,&local_688);
        DAT_1809baac8 = lVar8;
        DAT_180c71ff8 = 0xffffffffffffffff;
        if (DAT_180c71ff0 == 0) {
          DAT_180c71ff8 = DAT_1809baad0 + UVar9;
          if (DAT_1809baad0 < 60000) {
            DAT_1809baad0 = DAT_1809baad0 * 2;
          }
          else {
            DAT_1809baad0 = 60000;
          }
        }
        else {
          DAT_1809baad0 = 1000;
        }
      }
      lVar14 = DAT_180c71ff0;
      FUN_1805f68fc(&DAT_1809baae0);
    }
  }
  FUN_18063ab10(local_638,0,0x600);
  local_6b0 = "missing";
  if (lVar14 != 0) {
    local_6b0 = "resolved";
  }
  local_6b8 = *(double *)(DAT_180b0dfb0 + 0x70);
  local_6c0 = *(undefined8 *)(DAT_180b0dfb0 + 0x68);
  local_6c8 = *(undefined8 *)(DAT_180b0dfb0 + 0x60);
  local_6d0 = (char *)CONCAT44(local_6d0._4_4_,puVar16[0x11]);
  local_6d8 = *(undefined ***)(DAT_180b0dfb0 + 8);
  FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                "command=%lld client_tick=%d value=0x%llx changed=0x%llx scroll=0x%llx allocator=%s"
               );
  local_6d8 = &PTR_180700558;
  if (local_638[0] != '\0') {
    local_6d8 = (undefined **)&DAT_1806bcfc0;
  }
  local_6d0 = local_638;
  FUN_1800f6900(2);
LAB_1803df67c:
  if (local_668 == 0) {
    FUN_1800aa120("input apply: buttons complete");
    lVar8 = FUN_18017ea70();
    *(char **)(lVar8 + 8) = "input apply: crc";
    FUN_1803e09a0("input apply: crc",puVar16);
    FUN_1800aa120("input apply: crc complete");
  }
  else {
    lVar8 = FUN_18017ea70();
    *(char **)(lVar8 + 8) = "input apply: crc";
    FUN_1803e09a0("input apply: crc",puVar16);
  }
}



