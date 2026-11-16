// FUN_1803e7050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e7050 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001803e7694) */

void FUN_1803e7050(undefined *param_1,longlong param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  byte bVar7;
  int iVar8;
  DWORD DVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  code *pcVar16;
  undefined4 uVar17;
  code *pcVar18;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_708 [32];
  undefined **local_6e8;
  char *local_6e0;
  uint local_6d8;
  longlong *local_6d0;
  char *local_6c8;
  longlong local_6c0;
  char *local_6b8;
  longlong local_6b0;
  code *local_6a8;
  longlong local_6a0;
  longlong local_698;
  undefined *local_690;
  undefined *local_688;
  longlong *local_680;
  char *local_678;
  undefined8 local_670;
  undefined8 local_668;
  undefined1 local_660 [16];
  char local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_708;
  local_678 = "generic";
  local_670 = 0x41b818518343427e;
  local_668 = 0xb5f447c23c0cdf8c;
  if (param_1 == (undefined *)0x0) {
  }
  if (param_2 == 0) {
  }
  local_698 = param_2;
  local_690 = param_1;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar12 = DAT_1809bb2a0;
  lVar4 = DAT_1808da460;
  local_6a8 = (code *)DAT_180c7c258;
  if ((DAT_1809bb2a0 != DAT_1808da460) || (DAT_180c7c258 == (undefined1 *)0x0)) {
    UVar10 = GetTickCount64();
    if ((lVar12 == lVar4) && (UVar10 < DAT_180c7c260)) {
      local_6a8 = (code *)0x0;
    }
    else {
      local_688 = &DAT_1809bb1a0;
      iVar8 = FUN_1805f68d0(&DAT_1809bb1a0);
      if (iVar8 != 0) goto LAB_1803e7804;
      if (DAT_1809bb1ec == 0x7fffffff) {
        DAT_1809bb1ec = 0x7ffffffe;
        goto LAB_1803e7819;
      }
      local_6a8 = (code *)DAT_180c7c258;
      if (DAT_1809bb2a0 == lVar4) {
        if ((DAT_180c7c258 == (undefined1 *)0x0) && (DAT_180c7c260 <= UVar10)) goto LAB_1803e71ad;
      }
      else {
        DAT_1809bb198 = 1000;
LAB_1803e71ad:
        lVar12 = -1;
        do {
          local_6a0 = lVar12 + 1;
          pcVar1 = "ier0.dll:40534883EC3080FA060FB6C241B916" + lVar12;
          lVar12 = local_6a0;
        } while (*pcVar1 != '\0');
        local_6a8 = (code *)&DAT_180825e98;
        local_6c8 = "patterns::kv3_alloc";
        local_6c0 = 0x13;
        local_6a8 = (code *)FUN_1800e5d20(&local_6c8,&local_6a8);
        DAT_1809bb2a0 = lVar4;
        DAT_180c7c260 = 0xffffffffffffffff;
        if (local_6a8 == (code *)0x0) {
          DAT_180c7c260 = DAT_1809bb198 + UVar10;
          if (DAT_1809bb198 < 60000) {
            DAT_1809bb198 = DAT_1809bb198 * 2;
          }
          else {
            DAT_1809bb198 = 60000;
          }
        }
        else {
          DAT_1809bb198 = 1000;
        }
      }
      DAT_180c7c258 = local_6a8;
      FUN_1805f68fc(&DAT_1809bb1a0);
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar12 = DAT_1809bb1f0;
  lVar4 = DAT_1808da460;
  if ((DAT_1809bb1f0 != DAT_1808da460) || (pcVar16 = (code *)DAT_180c72138, DAT_180c72138 == 0)) {
    UVar10 = GetTickCount64();
    if ((lVar12 == lVar4) && (UVar10 < DAT_180c72140)) {
      pcVar16 = (code *)0x0;
    }
    else {
      local_688 = &DAT_1809bb200;
      iVar8 = FUN_1805f68d0(&DAT_1809bb200);
      if (iVar8 != 0) goto LAB_1803e7804;
      if (DAT_1809bb24c == 0x7fffffff) {
        DAT_1809bb24c = 0x7ffffffe;
        goto LAB_1803e7819;
      }
      if (DAT_1809bb1f0 == lVar4) {
        if ((DAT_180c72138 == 0) && (DAT_180c72140 <= UVar10)) goto LAB_1803e7325;
      }
      else {
        DAT_1809bb1f8 = 1000;
LAB_1803e7325:
        lVar12 = -1;
        do {
          local_6c0 = lVar12 + 1;
          pcVar1 = "ier0.dll:405741574883EC384C8B01448BFA498BC0488BF948C1E802" + lVar12;
          lVar12 = local_6c0;
        } while (*pcVar1 != '\0');
        local_6c8 = "tier0.dll:405741574883EC384C8B01448BFA498BC0488BF948C1E802";
        local_6b8 = "patterns::kv3_destroy";
        local_6b0 = 0x15;
        DAT_180c72138 = FUN_1800e5d20(&local_6b8,&local_6c8);
        DAT_1809bb1f0 = lVar4;
        DAT_180c72140 = 0xffffffffffffffff;
        if (DAT_180c72138 == 0) {
          DAT_180c72140 = DAT_1809bb1f8 + UVar10;
          if (DAT_1809bb1f8 < 60000) {
            DAT_1809bb1f8 = DAT_1809bb1f8 * 2;
          }
          else {
            DAT_1809bb1f8 = 60000;
          }
        }
        else {
          DAT_1809bb1f8 = 1000;
        }
      }
      pcVar16 = (code *)DAT_180c72138;
      FUN_1805f68fc(&DAT_1809bb200);
    }
  }
  if (DAT_180c72120 == 0) {
    local_6b8 = "tier0.dll:?LoadKV3@@YA_NPEAVKeyValues3@@PEAVCUtlString@@PEBDAEBUKV3ID_t@@2I@Z";
    local_6b0 = 0x4d;
    DAT_180c72120 = FUN_180451750(&local_6b8);
  }
  lVar4 = DAT_180c72120;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar11 = DAT_1809bb0e0;
  lVar12 = DAT_1808da460;
  if ((DAT_1809bb0e0 != DAT_1808da460) || (pcVar18 = (code *)DAT_180c72128, DAT_180c72128 == 0)) {
    UVar10 = GetTickCount64();
    if ((lVar11 == lVar12) && (UVar10 < DAT_180c72130)) {
      pcVar18 = (code *)0x0;
    }
    else {
      local_688 = &DAT_1809bb0f0;
      iVar8 = FUN_1805f68d0(&DAT_1809bb0f0);
      if (iVar8 != 0) goto LAB_1803e7804;
      if (DAT_1809bb13c == 0x7fffffff) {
        DAT_1809bb13c = 0x7ffffffe;
        goto LAB_1803e7819;
      }
      if (DAT_1809bb0e0 == lVar12) {
        if ((DAT_180c72128 == 0) && (DAT_180c72130 <= UVar10)) goto LAB_1803e74d3;
      }
      else {
        DAT_1809bb190 = 1000;
LAB_1803e74d3:
        uVar15 = 1000;
        lVar11 = -1;
        do {
          local_6b0 = lVar11 + 1;
          lVar3 = lVar11 + 1;
          lVar11 = local_6b0;
        } while ("materialsystem2.dll:48895C24??48896C24??48897424??48897C24??41564881EC????????488B05????????488BF2"
                 [lVar3] != '\0');
        local_6b8 = 
        "materialsystem2.dll:48895C24??48896C24??48897424??48897C24??41564881EC????????488B05????????488BF2"
        ;
        local_6c8 = "patterns::material_create";
        local_6c0 = 0x19;
        DAT_180c72128 = FUN_1800e5d20(&local_6c8,&local_6b8);
        DAT_1809bb0e0 = lVar12;
        DAT_180c72130 = 0xffffffffffffffff;
        if (DAT_180c72128 == 0) {
          DAT_180c72130 = DAT_1809bb190 + UVar10;
          uVar15 = DAT_1809bb190 * 2;
          if (59999 < DAT_1809bb190) {
            uVar15 = 60000;
          }
        }
        DAT_1809bb190 = uVar15;
      }
      pcVar18 = (code *)DAT_180c72128;
      FUN_1805f68fc(&DAT_1809bb0f0);
    }
    param_2 = local_698;
  }
  pcVar5 = local_6a8;
  if ((((local_6a8 != (code *)0x0) && (pcVar16 != (code *)0x0)) && (lVar4 != 0)) &&
     (pcVar18 != (code *)0x0)) {
    local_688 = &DAT_1809bb140;
    iVar8 = FUN_1805f68d0(&DAT_1809bb140);
    if (iVar8 != 0) {
LAB_1803e7804:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bb18c == 0x7fffffff) {
      DAT_1809bb18c = 0x7ffffffe;
LAB_1803e7819:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    lVar12 = FUN_18017ea70();
    uVar2 = *(undefined8 *)(lVar12 + 8);
    local_698 = uVar2;
    piVar13 = (int *)FUN_18017ea70();
    *piVar13 = *piVar13 + 1;
    *(char **)(piVar13 + 2) = "materials: create material";
    local_660 = (undefined1  [16])0x0;
    puVar14 = (undefined1 *)(*pcVar5)(local_660,1,6);
    if (puVar14 == local_660) {
      local_680 = (longlong *)0x0;
      local_6e0 = (char *)((ulonglong)local_6e0 & 0xffffffff00000000);
      local_6e8 = (undefined **)0x0;
      bVar7 = (*(code *)lVar4)(local_660,0,local_690,&local_678);
      if (bVar7 != 0) {
        local_6e0 = (char *)CONCAT71(local_6e0._1_7_,1);
        local_6e8 = (undefined **)((ulonglong)local_6e8 & 0xffffffff00000000);
        (*pcVar18)(0,&local_680,param_2,local_660);
      }
      (*pcVar16)(local_660,0);
      UVar10 = GetTickCount64();
      plVar6 = local_680;
      if (DAT_180c72118 <= UVar10) {
        DAT_180c72118 = UVar10 + 1000;
        LOCK();
        UNLOCK();
        DVar9 = GetCurrentThreadId();
        if ((bVar7 == 0) || (uVar17 = 0, local_680 == (longlong *)0x0)) {
          uVar17 = 2;
        }
        FUN_18063ab10(local_648,0,0x600);
        local_6d0 = plVar6;
        local_6d8 = (uint)bVar7;
        local_6e8 = (undefined **)CONCAT44(local_6e8._4_4_,DVar9);
        local_6e0 = (char *)param_2;
        FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                      "thread=%lu name=%.96s parsed=%d binding=%p serialized=1");
        local_6e8 = &PTR_180700558;
        if (local_648[0] != '\0') {
          local_6e8 = (undefined **)&DAT_1806bcfc0;
        }
        local_6e0 = local_648;
        FUN_1800f6900(uVar17);
      }
      if (((bVar7 != 0) && (local_680 != (longlong *)0x0)) && (*local_680 != 0)) {
        local_690 = &DAT_1809bb090;
        iVar8 = FUN_1805f68d0(&DAT_1809bb090);
        if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1809bb0dc == 0x7fffffff) {
          DAT_1809bb0dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if (DAT_180b0df88 == DAT_180b0df90) {
          FUN_1803e7850(extraout_XMM0_Qa,DAT_180b0df88,&local_680);
        }
        else {
          *DAT_180b0df88 = local_680;
          DAT_180b0df88 = DAT_180b0df88 + 1;
        }
        FUN_1805f68fc(&DAT_1809bb090);
      }
    }
    piVar13 = (int *)FUN_18017ea70();
    *(undefined8 *)(piVar13 + 2) = uVar2;
    if (*piVar13 != 0) {
      *piVar13 = *piVar13 + -1;
    }
    FUN_1805f68fc(&DAT_1809bb140);
  }
}



