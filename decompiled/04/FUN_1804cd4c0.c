// FUN_1804cd4c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cd4c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804cd4c0(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  char cVar15;
  undefined1 auVar16 [64];
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  ulonglong local_30;
  
  lVar9 = DAT_180bb8ae8;
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  if (*(int *)(DAT_180bb8ae8 + 0x228c) == -1) {
  }
  iVar10 = strcmp("PROFILE_BUY_ORDER",(char *)(DAT_180bb8ae8 + 0x2290));
  if (iVar10 != 0) {
  }
  auVar1 = *(undefined1 (*) [16])(lVar9 + 0x22b8);
  iVar10 = *(int *)(lVar9 + 0x22d8);
  iVar2 = *(int *)(lVar9 + 0x22f0);
  auVar6 = vshufps_avx(auVar1,auVar1,0xff);
  auVar7 = vshufps_avx(auVar1,auVar1,0x55);
  auVar8 = vshufps_avx(auVar1,auVar1,0xaa);
  fVar5 = (auVar6._0_4_ - auVar7._0_4_) * (auVar8._0_4_ - auVar1._0_4_);
  if (*(float *)(lVar9 + 0x22e8) < fVar5) {
  }
  *(undefined4 *)(lVar9 + 0x22e0) = 0;
  *(float *)(lVar9 + 0x22e8) = fVar5;
  *(int *)(lVar9 + 0x22ec) = iVar10;
  cVar15 = '\x01';
  *(bool *)(lVar9 + 0x22b1) = iVar2 == iVar10;
  lVar14 = lVar9;
  if ((iVar2 == iVar10) && ((*(uint *)(lVar9 + 0x226c) & 0x800) == 0)) {
    if (*(int *)(lVar9 + 0x22dc) == 0) {
      local_34 = *(float *)(lVar9 + 0xd64);
      auVar1 = vmaxss_avx(auVar1,ZEXT416(*(uint *)(lVar9 + 0x22c8)));
      auVar7 = vmaxss_avx(auVar7,ZEXT416(*(uint *)(lVar9 + 0x22cc)));
      local_40 = auVar1._0_4_ - local_34;
      auVar1 = vminss_avx(auVar8,ZEXT416(*(uint *)(lVar9 + 0x22d0)));
      local_3c = auVar7._0_4_ - local_34;
      local_38 = auVar1._0_4_ + local_34;
      auVar1 = vminss_avx(auVar6,ZEXT416(*(uint *)(lVar9 + 0x22d4)));
      lVar14 = *(longlong *)(lVar9 + 0x14d0);
      local_34 = auVar1._0_4_ + local_34;
      if ((((local_40 < *(float *)(lVar14 + 0x268)) || (local_3c < *(float *)(lVar14 + 0x26c))) ||
          (*(float *)(lVar14 + 0x270) < local_38)) || (*(float *)(lVar14 + 0x274) < local_34)) {
        lVar4 = *(longlong *)(*(longlong *)(lVar14 + 0x2c8) + 0x38);
        local_58 = *(undefined4 *)(lVar4 + 0x44);
        local_54 = *(undefined4 *)(lVar4 + 0x48);
        local_50 = *(float *)(lVar4 + 0x3c);
        fStack_4c = *(float *)(lVar4 + 0x40);
        FUN_1804d9420(*(longlong *)(lVar14 + 0x2c8),&local_50,&local_58,0);
        FUN_1804cd880(*(undefined8 *)(lVar14 + 0x2c8),&local_40,*(undefined4 *)(lVar9 + 0xd5c));
        lVar14 = *(longlong *)(lVar14 + 0x2c8);
        iVar3 = *(int *)(lVar14 + 0xa0);
        iVar11 = iVar3 + -1;
        *(int *)(lVar14 + 0xa0) = iVar11;
        if (iVar11 == 0) {
          puVar13 = (undefined8 *)(*(longlong *)(lVar14 + 0x38) + 0x3c);
        }
        else {
          puVar13 = (undefined8 *)((longlong)(iVar3 + -2) * 0x10 + *(longlong *)(lVar14 + 0xa8));
        }
        uVar12 = puVar13[1];
        *(undefined8 *)(lVar14 + 0x60) = *puVar13;
        *(undefined8 *)(lVar14 + 0x68) = uVar12;
        FUN_1804d9200();
      }
      else {
        FUN_1804cd880(*(undefined8 *)(lVar14 + 0x2c8),&local_40,*(undefined4 *)(lVar9 + 0xd5c));
      }
    }
    else {
      fStack_44 = -*(float *)(lVar9 + 0xd64);
      auVar16 = ZEXT464(*(uint *)(lVar9 + 0xd5c));
      local_50 = *(float *)(lVar9 + 0x22b8) - fStack_44;
      fStack_4c = *(float *)(lVar9 + 0x22bc) - fStack_44;
      fStack_48 = fStack_44 + *(float *)(lVar9 + 0x22c0);
      fStack_44 = fStack_44 + *(float *)(lVar9 + 0x22c4);
      uVar12 = FUN_1804b81b0(**(undefined8 **)(lVar9 + 0x2030),1,"##Foreground");
      FUN_1804cd880(uVar12,&local_50,auVar16._0_8_);
    }
    lVar14 = DAT_180bb8ae8;
  }
  *(int *)(lVar9 + 0x22f4) = *(int *)(lVar9 + 4);
  if (((*(byte *)(lVar9 + 0x226c) & 0x10) == 0) || (*(int *)(lVar9 + 0x2274) != -1)) {
    if ((iVar2 == iVar10) &&
       ((*(char *)((longlong)*(int *)(lVar9 + 0x2274) + 0x118 + lVar14) == '\0' ||
        ((((iVar10 = *(int *)(lVar9 + 0x2274) + 0x290, 0x1ff < iVar10 && (iVar10 < 0x29b)) ||
          ((iVar10 == 0x1000 || (((iVar10 == 0x2000 || (iVar10 == 0x4000)) || (iVar10 == 0x8000)))))
          ) && (lVar14 = FUN_1804af210(lVar14), *(char *)(lVar14 + 8) != '\0'))))))
    goto LAB_1804cd813;
  }
  else if ((iVar2 == iVar10) && (*(int *)(lVar9 + 0x2270) < *(int *)(lVar9 + 4)))
  goto LAB_1804cd813;
  cVar15 = '\0';
LAB_1804cd813:
  *(char *)(lVar9 + 0x22b2) = cVar15;
  if ((cVar15 != '\0') && ((*(byte *)(lVar9 + 0x28cc) & 2) != 0)) {
    FUN_1804cf3e0("[dragdrop] AcceptDragDropPayload(): 0x%08X: payload delivery\n",
                  *(undefined4 *)(lVar9 + 0x22d8));
  }
}



