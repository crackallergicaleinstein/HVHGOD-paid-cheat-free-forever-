// FUN_18026fe00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026fe00 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180270a75) */

void FUN_18026fe00(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  code *pcVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined1 auStack_718 [32];
  undefined **local_6f8;
  char *local_6f0;
  undefined *local_6e8;
  undefined8 local_6d8;
  longlong local_6d0;
  longlong local_6c8;
  char *local_6b8;
  undefined8 local_6b0;
  longlong local_6a8;
  longlong lStack_6a0;
  longlong lStack_698;
  longlong lStack_690;
  longlong local_688;
  longlong lStack_680;
  longlong local_678;
  undefined1 local_670;
  char local_668 [1536];
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_718;
  *param_1 = param_2;
  iVar8 = DAT_180c64f98;
  local_6c8 = param_2;
  if (DAT_180c64f98 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c64f90) {
      iVar8 = 0;
    }
    else {
      local_6e8 = &DAT_1808f12e0;
      iVar8 = FUN_1805f68d0(&DAT_1808f12e0);
      if (iVar8 != 0) goto LAB_180270b4d;
      if (DAT_1808f132c == 0x7fffffff) {
        DAT_1808f132c = 0x7ffffffe;
        goto LAB_180270b42;
      }
      if ((DAT_180c64f98 == 0) && (DAT_180c64f90 <= UVar9)) {
        DAT_180c64f98 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c64f98 == 0) {
          DAT_180c64f90 = UVar9 + 1000;
        }
        else {
          DAT_180c64f90 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c64f98;
      FUN_1805f68fc(&DAT_1808f12e0);
    }
  }
  lVar14 = *(longlong *)(iVar8 + param_2);
  param_1[1] = lVar14;
  if (lVar14 == 0) {
  }
  iVar8 = DAT_180c64f80;
  if (DAT_180c64f80 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c64f88) {
      iVar8 = 0;
    }
    else {
      local_6e8 = &DAT_1808f1330;
      iVar8 = FUN_1805f68d0(&DAT_1808f1330);
      if (iVar8 != 0) goto LAB_180270b4d;
      if (DAT_1808f137c == 0x7fffffff) {
        DAT_1808f137c = 0x7ffffffe;
        goto LAB_180270b42;
      }
      if ((DAT_180c64f80 == 0) && (DAT_180c64f88 <= UVar9)) {
        DAT_180c64f80 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
        if (DAT_180c64f80 == 0) {
          DAT_180c64f88 = UVar9 + 1000;
        }
        else {
          DAT_180c64f88 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c64f80;
      FUN_1805f68fc(&DAT_1808f1330);
    }
  }
  lVar14 = *(longlong *)((longlong)iVar8 + 0x80 + param_1[1]);
  param_1[2] = lVar14;
  if (lVar14 == 0) {
  }
  iVar8 = FUN_1803d2d50();
  *(int *)((longlong)param_1 + 0x36c) = iVar8;
  if (iVar8 < 1) {
  }
  iVar8 = DAT_180c64f78;
  if (DAT_180c64f78 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c64f70) {
      iVar8 = 0;
    }
    else {
      local_6e8 = &DAT_1808f1290;
      iVar8 = FUN_1805f68d0(&DAT_1808f1290);
      if (iVar8 != 0) goto LAB_180270b4d;
      if (DAT_1808f12dc == 0x7fffffff) {
        DAT_1808f12dc = 0x7ffffffe;
        goto LAB_180270b42;
      }
      if ((DAT_180c64f78 == 0) && (DAT_180c64f70 <= UVar9)) {
        DAT_180c64f78 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
        if (DAT_180c64f78 == 0) {
          DAT_180c64f70 = UVar9 + 1000;
        }
        else {
          DAT_180c64f70 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c64f78;
      FUN_1805f68fc(&DAT_1808f1290);
    }
  }
  pcVar18 = *(char **)((longlong)iVar8 + param_1[1]);
  uVar2 = (undefined4)((ulonglong *)((longlong)iVar8 + param_1[1]))[1];
  iVar8 = DAT_180c64f7c;
  local_6d8 = pcVar18;
  if (DAT_180c64f7c == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c64f58) {
      iVar8 = 0;
    }
    else {
      local_6e8 = &DAT_1808f1240;
      iVar8 = FUN_1805f68d0(&DAT_1808f1240);
      if (iVar8 != 0) goto LAB_180270b4d;
      if (DAT_1808f128c == 0x7fffffff) {
        DAT_1808f128c = 0x7ffffffe;
        goto LAB_180270b42;
      }
      if ((DAT_180c64f7c == 0) && (DAT_180c64f58 <= UVar9)) {
        DAT_180c64f7c = FUN_1804174b0("CGameSceneNode",0xae099497);
        if (DAT_180c64f7c == 0) {
          DAT_180c64f58 = UVar9 + 1000;
        }
        else {
          DAT_180c64f58 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c64f7c;
      FUN_1805f68fc(&DAT_1808f1240);
    }
  }
  uVar17 = *(undefined8 *)((longlong)iVar8 + param_1[1]);
  uVar1 = *(undefined4 *)((undefined8 *)((longlong)iVar8 + param_1[1]) + 1);
  sVar7 = thunk_FUN_180624430((ulonglong)local_6d8 & 0xffffffff);
  if (0 < sVar7) {
  }
  sVar7 = thunk_FUN_180624430(local_6d8._4_4_);
  if (0 < sVar7) {
  }
  sVar7 = thunk_FUN_180624430(uVar2);
  if (0 < sVar7) {
  }
  param_1[0x46e] = (longlong)pcVar18;
  *(undefined4 *)(param_1 + 0x46f) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x237c) = uVar17;
  *(undefined4 *)((longlong)param_1 + 0x2384) = uVar1;
  iVar8 = DAT_180c64f68;
  if (DAT_180c64f68 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c64f60) {
      iVar8 = 0;
    }
    else {
      local_6e8 = &DAT_1808f11a0;
      iVar8 = FUN_1805f68d0(&DAT_1808f11a0);
      if (iVar8 != 0) goto LAB_180270b4d;
      if (DAT_1808f11ec == 0x7fffffff) {
        DAT_1808f11ec = 0x7ffffffe;
        goto LAB_180270b42;
      }
      if ((DAT_180c64f68 == 0) && (DAT_180c64f60 <= UVar9)) {
        DAT_180c64f68 = FUN_1804174b0("C_BaseEntity",0x7fcb378d);
        if (DAT_180c64f68 == 0) {
          DAT_180c64f60 = UVar9 + 1000;
        }
        else {
          DAT_180c64f60 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c64f68;
      FUN_1805f68fc(&DAT_1808f11a0);
    }
  }
  *(undefined4 *)(param_1 + 0x476) = *(undefined4 *)(iVar8 + param_2);
  sVar7 = thunk_FUN_180624430();
  if (0 < sVar7) {
  }
  iVar8 = DAT_180c64f48;
  if (DAT_180c64f48 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c64f50) {
      iVar8 = 0;
    }
    else {
      local_6e8 = &DAT_1808f11f0;
      iVar8 = FUN_1805f68d0(&DAT_1808f11f0);
      if (iVar8 != 0) goto LAB_180270b4d;
      if (DAT_1808f123c == 0x7fffffff) {
        DAT_1808f123c = 0x7ffffffe;
        goto LAB_180270b42;
      }
      if ((DAT_180c64f48 == 0) && (DAT_180c64f50 <= UVar9)) {
        DAT_180c64f48 = FUN_1804174b0("C_BaseEntity",0x7cf77892);
        if (DAT_180c64f48 == 0) {
          DAT_180c64f50 = UVar9 + 1000;
        }
        else {
          DAT_180c64f50 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c64f48;
      FUN_1805f68fc(&DAT_1808f11f0);
    }
  }
  param_1[0x471] = *(longlong *)(iVar8 + param_2);
  *(undefined4 *)(param_1 + 0x472) = *(undefined4 *)((longlong)iVar8 + 8 + param_2);
  iVar8 = DAT_180c64f40;
  if (DAT_180c64f40 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c64f38) {
      iVar8 = 0;
    }
    else {
      local_6e8 = &DAT_1808f1150;
      iVar8 = FUN_1805f68d0(&DAT_1808f1150);
      if (iVar8 != 0) goto LAB_180270b4d;
      if (DAT_1808f119c == 0x7fffffff) {
        DAT_1808f119c = 0x7ffffffe;
        goto LAB_180270b42;
      }
      if ((DAT_180c64f40 == 0) && (DAT_180c64f38 <= UVar9)) {
        DAT_180c64f40 = FUN_1804174b0("C_BaseEntity",0xa4a37590);
        if (DAT_180c64f40 == 0) {
          DAT_180c64f38 = UVar9 + 1000;
        }
        else {
          DAT_180c64f38 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c64f40;
      FUN_1805f68fc(&DAT_1808f1150);
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x23ac) = *(undefined4 *)(iVar8 + param_2);
  iVar8 = DAT_180c64f44;
  if (DAT_180c64f44 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c64f20) {
      iVar8 = 0;
    }
    else {
      local_6e8 = &DAT_1808f1100;
      iVar8 = FUN_1805f68d0(&DAT_1808f1100);
      if (iVar8 != 0) goto LAB_180270b4d;
      if (DAT_1808f114c == 0x7fffffff) {
        DAT_1808f114c = 0x7ffffffe;
        goto LAB_180270b42;
      }
      if ((DAT_180c64f44 == 0) && (DAT_180c64f20 <= UVar9)) {
        DAT_180c64f44 = FUN_1804174b0("C_BaseEntity",0xc1e3aaa1);
        if (DAT_180c64f44 == 0) {
          DAT_180c64f20 = UVar9 + 1000;
        }
        else {
          DAT_180c64f20 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c64f44;
      FUN_1805f68fc(&DAT_1808f1100);
    }
  }
  lVar14 = *(longlong *)(iVar8 + param_2);
  if (lVar14 == 0) {
  }
  iVar8 = DAT_180c64f30;
  if (DAT_180c64f30 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c64f28) {
      iVar8 = 0;
    }
    else {
      local_6e8 = &DAT_1808f1060;
      iVar8 = FUN_1805f68d0(&DAT_1808f1060);
      if (iVar8 != 0) goto LAB_180270b4d;
      if (DAT_1808f10ac == 0x7fffffff) {
        DAT_1808f10ac = 0x7ffffffe;
        goto LAB_180270b42;
      }
      if ((DAT_180c64f30 == 0) && (DAT_180c64f28 <= UVar9)) {
        DAT_180c64f30 = FUN_1804174b0("CCollisionProperty",0xe57f80c);
        if (DAT_180c64f30 == 0) {
          DAT_180c64f28 = UVar9 + 1000;
        }
        else {
          DAT_180c64f28 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c64f30;
      FUN_1805f68fc(&DAT_1808f1060);
    }
  }
  *(undefined8 *)((longlong)param_1 + 0x2394) = *(undefined8 *)(iVar8 + lVar14);
  *(undefined4 *)((longlong)param_1 + 0x239c) = *(undefined4 *)((longlong)iVar8 + 8 + lVar14);
  iVar8 = DAT_180c64f10;
  if (DAT_180c64f10 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c64f18) {
      iVar8 = 0;
    }
    else {
      local_6e8 = &DAT_1808f10b0;
      iVar8 = FUN_1805f68d0(&DAT_1808f10b0);
      if (iVar8 != 0) goto LAB_180270b4d;
      if (DAT_1808f10fc == 0x7fffffff) {
        DAT_1808f10fc = 0x7ffffffe;
        goto LAB_180270b42;
      }
      if ((DAT_180c64f10 == 0) && (DAT_180c64f18 <= UVar9)) {
        DAT_180c64f10 = FUN_1804174b0("CCollisionProperty",0x7d388d3e);
        if (DAT_180c64f10 == 0) {
          DAT_180c64f18 = UVar9 + 1000;
        }
        else {
          DAT_180c64f18 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c64f10;
      FUN_1805f68fc(&DAT_1808f10b0);
    }
  }
  param_1[0x474] = *(longlong *)(iVar8 + lVar14);
  *(undefined4 *)(param_1 + 0x475) = *(undefined4 *)((longlong)iVar8 + 8 + lVar14);
  lVar14 = param_1[1];
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar10 = DAT_1808f1000;
  lVar3 = DAT_1808da460;
  if ((DAT_1808f1000 == DAT_1808da460) && (pcVar15 = (code *)DAT_180c64f00, DAT_180c64f00 != 0)) {
LAB_180270816:
    (*pcVar15)(lVar14,0x100);
  }
  else {
    UVar9 = GetTickCount64();
    if ((lVar10 != lVar3) || (DAT_180c64f08 <= UVar9)) {
      local_6e8 = &DAT_1808f1010;
      iVar8 = FUN_1805f68d0(&DAT_1808f1010);
      if (iVar8 != 0) goto LAB_180270b4d;
      if (DAT_1808f105c == 0x7fffffff) {
        DAT_1808f105c = 0x7ffffffe;
        goto LAB_180270b42;
      }
      uVar16 = 1000;
      if (DAT_1808f1000 == lVar3) {
        if ((DAT_180c64f00 == 0) && (DAT_180c64f08 <= UVar9)) goto LAB_180270777;
      }
      else {
        DAT_1808f0fa8 = 1000;
LAB_180270777:
        lVar10 = -1;
        do {
          local_6d0 = lVar10 + 1;
          lVar4 = lVar10 + 1;
          lVar10 = local_6d0;
        } while ("client.dll:>E8????????4084ED7417"[lVar4] != '\0');
        local_6d8 = "client.dll:>E8????????4084ED7417";
        local_6b8 = "patterns::game_scene_node_set_skeleton";
        local_6b0 = 0x26;
        DAT_180c64f00 = FUN_1800e5d20(&local_6b8,&local_6d8);
        DAT_1808f1000 = lVar3;
        DAT_180c64f08 = 0xffffffffffffffff;
        if (DAT_180c64f00 == 0) {
          DAT_180c64f08 = DAT_1808f0fa8 + UVar9;
          uVar16 = 60000;
          if (DAT_1808f0fa8 < 60000) {
            uVar16 = DAT_1808f0fa8 * 2;
          }
        }
        DAT_1808f0fa8 = uVar16;
      }
      pcVar15 = (code *)DAT_180c64f00;
      FUN_1805f68fc(&DAT_1808f1010);
      if (pcVar15 != (code *)0x0) goto LAB_180270816;
    }
  }
  iVar8 = DAT_180c64ef0;
  if (DAT_180c64ef0 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c64ef8) {
      iVar8 = 0;
    }
    else {
      local_6e8 = &DAT_1808f0fb0;
      iVar8 = FUN_1805f68d0(&DAT_1808f0fb0);
      if (iVar8 != 0) {
LAB_180270b4d:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f0ffc == 0x7fffffff) {
        DAT_1808f0ffc = 0x7ffffffe;
LAB_180270b42:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c64ef0 == 0) && (DAT_180c64ef8 <= UVar9)) {
        DAT_180c64ef0 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
        if (DAT_180c64ef0 == 0) {
          DAT_180c64ef8 = UVar9 + 1000;
        }
        else {
          DAT_180c64ef8 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c64ef0;
      FUN_1805f68fc(&DAT_1808f0fb0);
    }
  }
  lVar14 = *(longlong *)((longlong)iVar8 + 0x80 + param_1[1]);
  param_1[2] = lVar14;
  if ((((lVar14 != 0) && (FUN_18026be00(&local_6a8,local_6c8), (char)local_678 != '\0')) &&
      (lStack_698 == param_1[1])) && (*(int *)((longlong)param_1 + 0x36c) < 0x81)) {
    param_1[3] = local_6a8;
    param_1[4] = lStack_6a0;
    param_1[5] = lStack_698;
    param_1[6] = lStack_690;
    param_1[7] = local_688;
    param_1[8] = lStack_680;
    plVar11 = (longlong *)FUN_1803dad10();
    lVar14 = 6;
    plVar5 = param_1 + 9;
    do {
      plVar13 = plVar5;
      plVar12 = plVar11;
      lVar3 = plVar12[1];
      *plVar13 = *plVar12;
      plVar13[1] = lVar3;
      lVar3 = plVar12[3];
      plVar13[2] = plVar12[2];
      plVar13[3] = lVar3;
      lVar3 = plVar12[5];
      plVar13[4] = plVar12[4];
      plVar13[5] = lVar3;
      lVar3 = plVar12[7];
      plVar13[6] = plVar12[6];
      plVar13[7] = lVar3;
      lVar3 = plVar12[9];
      plVar13[8] = plVar12[8];
      plVar13[9] = lVar3;
      lVar3 = plVar12[0xb];
      plVar13[10] = plVar12[10];
      plVar13[0xb] = lVar3;
      lVar3 = plVar12[0xd];
      plVar13[0xc] = plVar12[0xc];
      plVar13[0xd] = lVar3;
      lVar3 = plVar12[0xf];
      plVar13[0xe] = plVar12[0xe];
      plVar13[0xf] = lVar3;
      lVar14 = lVar14 + -1;
      plVar11 = plVar12 + 0x10;
      plVar5 = plVar13 + 0x10;
    } while (lVar14 != 0);
    lVar14 = plVar12[0x11];
    plVar13[0x10] = plVar12[0x10];
    plVar13[0x11] = lVar14;
    lVar14 = plVar12[0x13];
    plVar13[0x12] = plVar12[0x12];
    plVar13[0x13] = lVar14;
    *(int *)(plVar13 + 0x14) = (int)plVar12[0x14];
    if ((int)param_1[0x6d] != 0) {
      FUN_18063aed0(param_1 + 0x6e,param_1[2],(longlong)*(int *)((longlong)param_1 + 0x36c) << 5);
      local_6a8 = 0;
      lStack_6a0 = param_1[3];
      lStack_698 = param_1[4];
      lStack_690 = param_1[5];
      local_688 = param_1[6];
      lStack_680 = param_1[7];
      local_678 = param_1[8];
      local_670 = 0;
      cVar6 = FUN_18026ccd0(&local_6a8);
      if (cVar6 != '\0') {
        *(int *)((longlong)param_1 + 0x23b4) = (int)(*(float *)(param_1 + 0x476) * 64.0 + 0.5);
        *(undefined1 *)(param_1 + 0x477) = 1;
        LOCK();
        DAT_180c64ee8 = DAT_180c64ee8 + 1;
        UNLOCK();
        UVar9 = GetTickCount64();
        local_6f8 = (undefined **)DAT_180c64ee8;
        if (DAT_180c64ed8 <= UVar9) {
          DAT_180c64ed8 = UVar9 + 2000;
          LOCK();
          UNLOCK();
          uVar2 = *(undefined4 *)((longlong)param_1 + 0x23b4);
          LOCK();
          DAT_180c64ee8 = 0;
          UNLOCK();
          FUN_18063ab10(local_668,0,0x600);
          local_6f0 = (char *)CONCAT44(local_6f0._4_4_,uVar2);
          FUN_18015ad60(local_668,0x600,0xffffffffffffffff,
                        "captures=%llu last_record_tick=%d global_clock_overrides=0 mesh_group_overrides=0 native_skeleton=1 local_pose_writes=0 server_correction=unverified"
                       );
          local_6f8 = &PTR_180700558;
          if (local_668[0] != '\0') {
            local_6f8 = (undefined **)&DAT_1806bcfc0;
          }
          local_6f0 = local_668;
          FUN_1800f6900(0);
        }
      }
    }
  }
}



