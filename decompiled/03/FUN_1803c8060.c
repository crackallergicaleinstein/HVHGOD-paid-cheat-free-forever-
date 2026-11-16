// FUN_1803c8060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c8060 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001803c8341) */

void FUN_1803c8060(longlong param_1,char *param_2,longlong param_3,longlong param_4)

{
  char *pcVar1;
  int *piVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  ULONGLONG UVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  char *pcVar14;
  char *pcVar15;
  undefined1 auStack_6b8 [32];
  undefined **local_698;
  char *local_690;
  uint local_688;
  char *local_678;
  undefined1 local_670 [8];
  undefined8 uStack_668;
  char local_658 [1536];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_6b8;
  uVar5 = *(ulonglong *)(param_1 + 0x1048);
  if ((uVar5 == 0) || (UVar10 = GetTickCount64(), uVar5 <= UVar10)) {
    param_2[1] = '\0';
  }
  else {
    _local_670 = (undefined1  [16])0x0;
    plVar11 = (longlong *)FUN_180113860(param_1 + 0x1028);
    pcVar14 = *(char **)(param_1 + 0x1020);
    uStack_668 = plVar11;
    local_670 = (undefined1  [8])pcVar14;
    if (plVar11 == (longlong *)0x0) {
      plVar13 = (longlong *)&DAT_00000008;
    }
    else {
      plVar13 = plVar11 + 1;
      LOCK();
      *(int *)plVar13 = (int)*plVar13 + 1;
      UNLOCK();
    }
    LOCK();
    uVar3 = *(undefined8 *)(param_1 + 0x1028);
    *(undefined8 *)(param_1 + 0x1028) = plVar11;
    UNLOCK();
    if (((byte)uVar3 & 3) == 2) {
      FUN_1805fa36c(param_1 + 0x1028);
    }
    if ((pcVar14 == (char *)0x0) || (param_3 == 0)) {
      param_2[1] = '\0';
      if (plVar11 == (longlong *)0x0) {
      }
      LOCK();
      iVar9 = (int)*plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
    }
    else {
      lVar12 = FUN_18017ea70();
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
      if (param_3 + 0x18 == 0) {
        bVar6 = false;
      }
      else {
        local_678 = (char *)0x0;
        cVar7 = FUN_1804514f0(&local_678,param_3 + 0x18,8);
        if (cVar7 == '\0') {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
      }
      pcVar15 = local_678;
      lVar12 = FUN_18017ea70();
      if (*(int *)(lVar12 + 4) != 0) {
        *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
      }
      local_678 = pcVar14 + 0x148;
      if (!bVar6) {
        pcVar15 = (char *)0x0;
      }
      local_698 = (undefined **)((ulonglong)local_698 & 0xffffffffffffff00);
      cVar7 = FUN_1803c36b0(param_1,pcVar15,*(undefined4 *)local_678,0);
      if (cVar7 == '\0') {
        param_2[1] = '\0';
      }
      else {
        if (*(char *)(param_1 + 0xdc1) == '\0') {
          cVar7 = pcVar14[0x12e];
          if (param_4 != 0) {
            uVar4 = *(uint *)(pcVar14 + 0x130);
            local_670._4_4_ = (float)(uVar4 >> 8 & 0xff) / 255.0;
            local_670._0_4_ = (float)(uVar4 & 0xff) / 255.0;
            uStack_668._0_4_ = (float)(uVar4 >> 0x10 & 0xff) / 255.0;
            if (cVar7 == '\0') {
              uStack_668._4_4_ = 0;
            }
            else {
              uStack_668._4_4_ = (float)(uVar4 >> 0x18) / 255.0;
            }
            lVar12 = FUN_18017ea70();
            *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
            bVar8 = FUN_18029af40(param_4,local_670);
            lVar12 = FUN_18017ea70();
            if (*(int *)(lVar12 + 4) != 0) {
              *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
            }
            if ((cVar7 != '\0') && (bVar8 != 0)) {
              pcVar15 = pcVar14 + 0x150;
              *(undefined8 *)(param_1 + 0x1038) = *(undefined8 *)pcVar15;
              if (*(int *)(pcVar14 + 0x134) != 0) {
                pcVar14 = pcVar14 + 0x3c;
              }
              if (*(char *)(param_1 + 0xdc1) != '\0') {
                pcVar1 = pcVar14 + 0x3c;
                for (; pcVar14 != pcVar1; pcVar14 = pcVar14 + 0x14) {
                  if (*pcVar14 != '\0') goto LAB_1803c8318;
                }
              }
              *(undefined8 *)(param_1 + 0x1030) = *(undefined8 *)pcVar15;
            }
LAB_1803c8318:
            UVar10 = GetTickCount64();
            if ((cVar7 != '\0') && (DAT_180c71c90 <= UVar10)) {
              DAT_180c71c90 = UVar10 + 5000;
              LOCK();
              UNLOCK();
              FUN_18063ab10(local_658,0,0x600);
              local_688 = (uint)bVar8;
              local_690 = (char *)CONCAT44(local_690._4_4_,uVar4);
              local_698 = (undefined **)CONCAT44(local_698._4_4_,*(undefined4 *)local_678);
              FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                            "definition=%d native_color_callback=1 rgba=0x%x written=%d");
              local_698 = &PTR_180700558;
              if (local_658[0] != '\0') {
                local_698 = (undefined **)&DAT_1806bcfc0;
              }
              local_690 = local_658;
              FUN_1800f6900(0);
            }
          }
          *param_2 = cVar7;
          param_2[1] = '\x01';
          if (plVar11 == (longlong *)0x0) {
          }
          LOCK();
          plVar13 = plVar11 + 1;
          lVar12 = *plVar13;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)lVar12 != 1) {
          }
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar9 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar9 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11);
          }
        }
        if (param_4 != 0) {
          _local_670 = (undefined1  [16])0x0;
          lVar12 = FUN_18017ea70();
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
          FUN_18029af40(param_4,local_670);
          lVar12 = FUN_18017ea70();
          if (*(int *)(lVar12 + 4) != 0) {
            *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
          }
        }
        param_2[0] = '\0';
        param_2[1] = '\x01';
      }
      if (plVar11 == (longlong *)0x0) {
      }
      LOCK();
      plVar13 = plVar11 + 1;
      iVar9 = (int)*plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
    }
    if (iVar9 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar9 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11);
      }
    }
  }
}



