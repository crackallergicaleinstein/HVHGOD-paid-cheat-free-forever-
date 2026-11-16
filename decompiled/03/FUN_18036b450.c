// FUN_18036b450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036b450 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18036b450(void)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  float *pfVar8;
  longlong *plVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  undefined8 *puVar12;
  float *pfVar13;
  float fVar14;
  char cVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_6e8 [32];
  undefined8 local_6c8;
  undefined8 local_6c0;
  float local_6b8 [6];
  longlong local_6a0;
  longlong lStack_698;
  ulonglong uStack_690;
  longlong lStack_688;
  undefined *local_680;
  undefined1 local_678 [32];
  char local_658 [1536];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_6e8;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_6a0 = _DAT_180bb8890;
  lStack_698 = lRam0000000180bb8898;
  uStack_690 = uRam0000000180bb88a0;
  lStack_688 = uRam0000000180bb88a8;
  cVar15 = cRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if ((lStack_698 == 0) || (cVar15 == '\0')) {
    LOCK();
    DAT_180b90200 = 0;
    UNLOCK();
    DAT_180b90230 = 0;
    puVar12 = &DAT_180b90220;
    if (0xf < DAT_180b90238) {
      puVar12 = DAT_180b90220;
    }
    *(undefined1 *)puVar12 = 0;
    DAT_180b90240 = 0;
  }
  else {
    local_6b8[4] = 1.0;
    local_6b8[0] = 0.0;
    local_6b8[2] = DAT_180cc8fdc;
    fVar14 = 1.0;
    fVar17 = 0.0;
    fVar16 = DAT_180cc8fdc;
    sVar6 = thunk_FUN_180624430();
    iVar3 = _DAT_180cc8fd8;
    cVar15 = DAT_180cc8f70;
    if (sVar6 < 1) {
      pfVar13 = local_6b8;
      if (fVar17 <= fVar16) {
        pfVar13 = local_6b8 + 2;
      }
      pfVar8 = local_6b8 + 4;
      if (fVar16 <= fVar14) {
        pfVar8 = pfVar13;
      }
      fVar14 = *pfVar8;
    }
    plVar9 = (longlong *)FUN_1803717a0(local_678);
    local_6a0 = *plVar9;
    lStack_698 = plVar9[1];
    uStack_690 = plVar9[2];
    lStack_688 = plVar9[3];
    local_680 = &DAT_1808e4860;
    iVar7 = FUN_1805f68d0(&DAT_1808e4860);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808e48ac == 0x7fffffff) {
      DAT_1808e48ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if (((local_6a0 != 0) && (lStack_698 != 0)) && (uStack_690 - 1 < 0x400000)) {
      if (((DAT_1808e48b0 != local_6a0) || (DAT_1808e48b8 != lStack_698)) ||
         (DAT_1808e48c8 != (int)lStack_688)) {
        FUN_1801ac870(&DAT_1808e48d0);
        DAT_1808e491c = 0;
      }
      puVar12 = DAT_1808e48d8;
      DAT_1808e48b0 = local_6a0;
      DAT_1808e48b8 = lStack_698;
      DAT_1808e48c0 = uStack_690;
      _DAT_1808e48c8 = lStack_688;
      if (((DAT_1808e491c != 0) || (cVar15 != DAT_1808e4910)) ||
         ((iVar3 != DAT_1808e4914 || (fVar14 != DAT_1808e4918)))) {
        bVar5 = 0;
        DAT_1808e491c = 0;
        for (puVar1 = (undefined8 *)*DAT_1808e48d8; puVar1 != puVar12;
            puVar1 = (undefined8 *)*puVar1) {
          if ((ulonglong)puVar1[2] < DAT_1808e48c0) {
            uVar2 = (ulonglong)local_6c0 >> 0x20;
            local_6c0 = (char *)CONCAT44((int)uVar2,fVar14);
            local_6c8._4_4_ = (undefined4)((ulonglong)local_6c8 >> 0x20);
            local_6c8 = (undefined **)CONCAT44(local_6c8._4_4_,iVar3);
            bVar4 = FUN_180372680();
            bVar5 = bVar4 ^ 1 | bVar5;
            DAT_1808e491c = bVar5;
          }
        }
      }
      DAT_1808e4910 = cVar15;
      DAT_1808e4914 = iVar3;
      DAT_1808e4918 = fVar14;
    }
    FUN_1805f68fc(&DAT_1808e4860);
    if (((DAT_180bda4d0 == 0) && (DAT_180cc8e70 != '\0')) &&
       (UVar10 = GetTickCount64(), DAT_180c6f9f8 <= UVar10)) {
      DAT_180c6f9f8 = UVar10 + 5000;
      lVar11 = FUN_1803e7050("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d} format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{ Shader = \"csgo_unlitgeneric.vfx\"\n  F_BLEND_MODE = 4 F_DISABLE_Z_BUFFERING = 1 F_UNLIT = 1 F_VERTEX_COLOR = 1\n  g_tColor = resource:\"materials/sun/overlay_color_tga_b654634c.vtex\"\n  g_vColorTint = [1.0, 1.0, 1.0, 0.0]\n  g_bFogEnabled = 0\n}\n"
                             ,"hvhgod_smooth_sun_overlay");
      if (lVar11 != 0) {
        DAT_180bda4d0 = lVar11;
      }
      FUN_18063ab10(local_658,0,0x600);
      local_6c8 = (undefined **)CONCAT44(local_6c8._4_4_,(uint)(lVar11 != 0));
      FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                    "ready=%d shader=csgo_unlitgeneric native_radial_mask=preserved fog=off shared_material_mutated=0"
                   );
      local_6c8 = &PTR_180700558;
      if (local_658[0] != '\0') {
        local_6c8 = (undefined **)&DAT_1806bcfc0;
      }
      local_6c0 = local_658;
      FUN_1800f6900(2 - (uint)(lVar11 != 0),local_6c0,"World","SUN_OVERLAY_MATERIAL");
    }
    FUN_18036d650();
  }
}



