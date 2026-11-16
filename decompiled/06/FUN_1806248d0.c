// FUN_1806248d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806248d0 */

bool FUN_1806248d0(uint param_1,double *param_2,ulonglong param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  double dVar9;
  int local_res8 [2];
  undefined8 local_res20;
  
  bVar2 = 0;
  uVar5 = param_1 & 0x1f;
  if (((param_1 & 8) != 0) && ((char)param_3 < '\0')) {
    bVar2 = 1;
    uVar5 = param_1 & 0x17;
    goto LAB_180624c00;
  }
  if (((param_1 & 4) != 0) && ((param_3 >> 9 & 1) != 0)) {
    bVar2 = 4;
    uVar5 = param_1 & 0x1b;
    goto LAB_180624c00;
  }
  if (((param_1 & 1) == 0) || ((param_3 >> 10 & 1) == 0)) {
    if (((param_1 & 2) == 0) || ((param_3 >> 0xb & 1) == 0)) goto LAB_180624c00;
    uVar4 = param_1 >> 4 & 1;
    if (*param_2 == 0.0) {
      uVar4 = 1;
    }
    else {
      local_res8[0] = 0;
      dVar9 = (double)FUN_1806158d0(0,local_res8);
      iVar3 = local_res8[0] + -0x600;
      if (iVar3 < -0x432) {
        local_res20 = dVar9 * 0.0;
        uVar4 = 1;
      }
      else {
        bVar1 = false;
        cVar6 = '\0';
        local_res20 = (double)((ulonglong)dVar9 & 0xfffffffffffff | 0x10000000000000);
        if (iVar3 < -0x3fd) {
          local_res20._0_4_ = (uint)((ulonglong)dVar9 & 0xfffffffffffff);
          uVar7 = (ulonglong)(-iVar3 - 0x3fd);
          bVar1 = false;
          do {
            if ((((uint)local_res20 & 1) != 0) && (uVar4 == 0)) {
              uVar4 = 1;
            }
            bVar8 = cVar6 != '\0';
            cVar6 = (char)((uint)local_res20 & 1);
            if (bVar8) {
              bVar1 = true;
            }
            local_res20._0_4_ = (uint)local_res20 >> 1;
            if ((local_res20._4_4_ & 1) != 0) {
              local_res20._0_4_ = (uint)local_res20 | 0x80000000;
            }
            local_res20._4_4_ = local_res20._4_4_ >> 1;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (dVar9 < 0.0) {
          local_res20 = -local_res20;
        }
        bVar8 = dVar9 < 0.0;
        if ((cVar6 != '\0') || (bVar1)) {
          iVar3 = fegetround();
          if (iVar3 == 0) {
            if (cVar6 != '\0') {
              if (!bVar1) {
                bVar8 = ((ulonglong)local_res20 & 1) == 0;
                goto LAB_180624bc3;
              }
              goto LAB_180624bc5;
            }
          }
          else {
            if (iVar3 != 0x100) {
              if (iVar3 != 0x200) goto LAB_180624bdf;
              bVar8 = !bVar8;
            }
            bVar8 = !bVar8;
LAB_180624bc3:
            if (!bVar8) {
LAB_180624bc5:
              local_res20 = (double)((longlong)local_res20 + 1);
            }
          }
        }
      }
LAB_180624bdf:
      *param_2 = local_res20;
    }
    uVar5 = param_1 & 0x1d;
    bVar2 = -(uVar4 != 0) & 0x10;
    goto LAB_180624c00;
  }
  bVar2 = 8;
  uVar5 = (uint)param_3 & 0x6000;
  if ((param_3 & 0x6000) == 0) {
    if (0.0 < *param_2) {
      uVar5 = param_1 & 0x1e;
      *param_2 = INFINITY;
      goto LAB_180624c00;
    }
LAB_180624a1b:
    dVar9 = -INFINITY;
LAB_180624a2a:
    *param_2 = dVar9;
  }
  else {
    if (uVar5 == 0x2000) {
      if (0.0 < *param_2) {
        uVar5 = param_1 & 0x1e;
        *param_2 = 1.7976931348623157e+308;
        goto LAB_180624c00;
      }
      goto LAB_180624a1b;
    }
    if (uVar5 == 0x4000) {
      if (*param_2 <= 0.0) {
        uVar5 = param_1 & 0x1e;
        *param_2 = -1.7976931348623157e+308;
      }
      else {
        uVar5 = param_1 & 0x1e;
        *param_2 = INFINITY;
      }
      goto LAB_180624c00;
    }
    if (uVar5 == 0x6000) {
      dVar9 = 1.7976931348623157e+308;
      if (*param_2 <= 0.0) {
        uVar5 = param_1 & 0x1e;
        *param_2 = -1.7976931348623157e+308;
        goto LAB_180624c00;
      }
      goto LAB_180624a2a;
    }
  }
  uVar5 = param_1 & 0x1e;
LAB_180624c00:
  if (((param_1 & 0x10) != 0) && ((param_3 >> 0xc & 1) != 0)) {
    bVar2 = bVar2 | 0x20;
    uVar5 = uVar5 & 0xffffffef;
  }
  if (bVar2 != 0) {
    FUN_1806281c0();
  }
  return uVar5 == 0;
}



