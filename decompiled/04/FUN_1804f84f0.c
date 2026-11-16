// FUN_1804f84f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f84f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f84f0(int param_1,float *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  float *local_80;
  undefined4 local_78;
  float local_68;
  float local_64;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  char local_40;
  char local_3f [15];
  ulonglong local_30;
  
  lVar4 = DAT_180bb8ae8;
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(int *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
              *(longlong *)(DAT_180bb8ae8 + 0x2000)) == param_1)) {
    uVar12 = *(uint *)(DAT_180bb8ae8 + 0x1f10);
    fVar15 = param_2[2] - *param_2;
    fVar16 = 0.0;
    if ((uVar12 & 0x10) == 0) {
      uVar5 = param_3 | 4;
      if ((param_3 & 0x1e) != 0) {
        uVar5 = param_3;
      }
      param_3 = uVar5;
      if ((param_3 & 4) == 0) {
        if ((param_3 & 2) == 0) {
          iVar8 = -1;
          if ((param_3 & 8) != 0) {
            iVar8 = 0x14;
          }
        }
        else {
          iVar8 = 4;
        }
      }
      else {
        iVar8 = 8;
      }
      fVar14 = 3.4028235e+38;
      if ((((((uVar12 & 2) == 0) || (fVar6 = 0.0, *(float *)(DAT_180bb8ae8 + 0x1f30) <= 0.0)) &&
           (fVar6 = fVar15, (uVar12 & 2) == 0)) ||
          (fVar15 = fVar6, *(float *)(DAT_180bb8ae8 + 0x1f34) <= 0.0)) && (0 < iVar8)) {
        fVar14 = ((*(float *)(DAT_180bb8ae8 + 0xcd8) + *(float *)(DAT_180bb8ae8 + 0x11e0)) *
                  (float)iVar8 - *(float *)(DAT_180bb8ae8 + 0xcd8)) +
                 *(float *)(DAT_180bb8ae8 + 0xc90) + *(float *)(DAT_180bb8ae8 + 0xc90);
      }
      *(uint *)(DAT_180bb8ae8 + 0x1f10) = uVar12 | 0x10;
      *(float *)(lVar4 + 0x1f5c) = fVar15;
      *(undefined4 *)(lVar4 + 0x1f60) = 0;
      *(undefined4 *)(lVar4 + 0x1f64) = 0x7f7fffff;
      *(float *)(lVar4 + 0x1f68) = fVar14;
      *(undefined8 *)(lVar4 + 0x1f70) = 0;
      *(undefined8 *)(lVar4 + 0x1f78) = 0;
    }
    else {
      auVar2 = vmaxss_avx(ZEXT416(*(uint *)(DAT_180bb8ae8 + 0x1f5c)),ZEXT416((uint)fVar15));
      *(int *)(DAT_180bb8ae8 + 0x1f5c) = auVar2._0_4_;
    }
    FUN_1804b08d0(&local_40,0x10,"##Combo_%02d",*(undefined4 *)(lVar4 + 0x2618));
    uVar12 = 0xffffffff;
    pcVar10 = local_3f;
    while (local_40 != '\0') {
      if (((local_40 == '#') && (*pcVar10 == '#')) && (pcVar10[1] == '#')) {
        uVar12 = 0xffffffff;
        pcVar10 = pcVar10 + 2;
      }
      else {
        uVar12 = crc32(uVar12,local_40);
      }
      local_40 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    }
    lVar11 = FUN_1804bbfd0(~uVar12);
    if ((lVar11 != 0) && (*(char *)(lVar11 + 0xcd) != '\0')) {
      lVar13 = lVar11;
      local_68 = fVar16;
      local_64 = fVar16;
      FUN_1804bc560(lVar11,local_58,&local_68);
      FUN_1804bc6c0(&local_60,lVar13,&local_68,0xffffffff);
      FUN_1804bc370(local_58,lVar11,&local_60);
      uVar9 = 3;
      if ((param_3 & 1) != 0) {
        uVar9 = 0;
      }
      *(undefined4 *)(lVar11 + 0xe4) = uVar9;
      FUN_1804c8330(local_50);
      local_68 = *param_2;
      local_64 = param_2[3];
      local_88 = local_50;
      local_78 = 1;
      local_80 = param_2;
      FUN_1804c7fe0(&local_60,&local_68,local_58);
      lVar11 = DAT_180bb8ae8;
      *(uint *)(DAT_180bb8ae8 + 0x1f10) = *(uint *)(DAT_180bb8ae8 + 0x1f10) | 1;
      *(undefined8 *)(lVar11 + 0x1f20) = local_60;
      *(undefined8 *)(lVar11 + 0x1f28) = 0;
      *(undefined4 *)(lVar11 + 0x1f14) = 1;
    }
    FUN_1804b2c90(2,*(undefined4 *)(lVar4 + 0xcc4));
    cVar7 = FUN_1804bee10(&local_40,0,0x4000147);
    FUN_1804b2de0(1);
    if (cVar7 == '\0') {
      FUN_1804c7e80();
    }
    else {
      *(int *)(lVar4 + 0x2618) = *(int *)(lVar4 + 0x2618) + 1;
      uVar3 = *(undefined8 *)(lVar4 + 0x2648);
      puVar1 = (undefined8 *)
               ((longlong)*(int *)(lVar4 + 0x14a0) * 0x88 + -0x14 + *(longlong *)(lVar4 + 0x14a8));
      *puVar1 = *(undefined8 *)(lVar4 + 0x2640);
      puVar1[1] = uVar3;
    }
  }
  else {
    *(undefined4 *)(DAT_180bb8ae8 + 0x1f10) = 0;
  }
}



