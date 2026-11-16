// FUN_18058e020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058e020 */

undefined4 FUN_18058e020(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint *puVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  byte *pbVar13;
  uint *puVar14;
  ushort uVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  code *pcVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  int local_res8 [2];
  int local_res10;
  int local_res14;
  int local_res18;
  int local_res1c;
  
  uVar22 = 0;
  do {
    puVar17 = (undefined4 *)0x0;
    uVar22 = uVar22 + 1;
    if (1000000 < uVar22) {
      *(undefined4 *)(param_1 + 4) = 0x8b;
      goto LAB_18059009e;
    }
    uVar7 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    bVar11 = *(byte *)((longlong)(int)param_1[0x3d] + param_1[0x3c]);
    uVar8 = (ulonglong)bVar11;
    *(byte *)(param_1 + 0x3e) = bVar11;
    *(undefined4 *)((longlong)param_1 + 500) = 1;
    bVar11 = (&DAT_18066ef00)[uVar8];
    uVar16 = *(int *)((longlong)param_1 + 0x24) - (uint)(bVar11 >> 4);
    *(uint *)(param_1 + 7) = uVar16;
    puVar4 = (undefined4 *)(ulonglong)uVar16;
    if ((int)uVar16 < 0) {
      if (*(char *)((longlong)param_1 + 0x2c6) != '\0') {
        *(undefined4 *)(param_1 + 4) = 0x81;
        goto LAB_18059009e;
      }
      uVar15 = 0;
      if ((bVar11 & 0xf0) != 0) {
        do {
          uVar8 = (ulonglong)uVar15;
          uVar15 = uVar15 + 1;
          *(undefined4 *)(param_1[6] + uVar8 * 4) = 0;
          uVar8 = (ulonglong)*(byte *)(param_1 + 0x3e);
        } while (uVar15 < (byte)(&DAT_18066ef00)[uVar8] >> 4);
      }
      *(undefined4 *)(param_1 + 7) = 0;
      puVar4 = puVar17;
    }
    iVar12 = (int)param_1[5];
    bVar11 = (byte)uVar8;
    iVar20 = (int)puVar4;
    iVar18 = ((byte)(&DAT_18066ef00)[uVar8] & 0xf) + iVar20;
    *(int *)((longlong)param_1 + 0x3c) = iVar18;
    if (iVar12 < iVar18) {
      *(undefined4 *)(param_1 + 4) = 0x82;
      goto LAB_18059009e;
    }
    puVar14 = (uint *)(param_1[6] + (longlong)puVar4 * 4);
    uVar16 = (uint)uVar8;
    switch(uVar16) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      uVar6 = (ushort)(bVar11 & 1) << 0xe;
      uVar15 = uVar6 ^ 0x4000;
      if (bVar11 < 4) {
        *(ushort *)((longlong)param_1 + 0x19c) = uVar6;
        *(ushort *)((longlong)param_1 + 0x19e) = uVar15;
        *(ushort *)(param_1 + 0x33) = uVar6;
        *(ushort *)((longlong)param_1 + 0x19a) = uVar15;
      }
      if ((uVar8 & 2) != 0) goto LAB_18058e2ac;
      *(ushort *)(param_1 + 0x34) = uVar6;
      *(ushort *)((longlong)param_1 + 0x1a2) = uVar15;
      FUN_180589fa0(param_1);
      break;
    case 6:
    case 7:
      cVar2 = FUN_18058c300(param_1,(short)puVar14[1],(short)*puVar14,(longlong)param_1 + 0x19c);
      if (cVar2 == '\0') {
        *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)((longlong)param_1 + 0x19c);
        FUN_180589fa0(param_1);
      }
      break;
    case 8:
    case 9:
      cVar2 = FUN_18058c300(param_1,(short)puVar14[1],(short)*puVar14,param_1 + 0x34);
      if (cVar2 == '\0') goto LAB_18058e2ac;
      break;
    case 10:
      if (((short)*puVar14 != 0) || ((short)puVar14[1] != 0)) {
        local_res10 = (int)(short)*puVar14;
        local_res14 = (int)(short)puVar14[1];
        FUN_180578b00(&local_res10);
        *(short *)((longlong)param_1 + 0x19c) =
             (short)((int)(local_res10 + (local_res10 >> 0x1f & 3U)) >> 2);
        *(short *)((longlong)param_1 + 0x19e) =
             (short)((int)(local_res14 + (local_res14 >> 0x1f & 3U)) >> 2);
      }
      *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)((longlong)param_1 + 0x19c);
      FUN_180589fa0(param_1);
      break;
    case 0xb:
      if (((short)*puVar14 != 0) || ((short)puVar14[1] != 0)) {
        local_res18 = (int)(short)*puVar14;
        local_res1c = (int)(short)puVar14[1];
        FUN_180578b00(&local_res18);
        *(short *)(param_1 + 0x34) = (short)((int)(local_res18 + (local_res18 >> 0x1f & 3U)) >> 2);
        *(short *)((longlong)param_1 + 0x1a2) =
             (short)((int)(local_res1c + (local_res1c >> 0x1f & 3U)) >> 2);
      }
LAB_18058e2ac:
      FUN_180589fa0(param_1);
      break;
    case 0xc:
      *puVar14 = (int)*(short *)((longlong)param_1 + 0x19c);
      puVar14[1] = (int)*(short *)((longlong)param_1 + 0x19e);
      break;
    case 0xd:
      *puVar14 = (int)(short)param_1[0x34];
      puVar14[1] = (int)*(short *)((longlong)param_1 + 0x1a2);
      break;
    case 0xe:
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x19c);
      FUN_180589fa0(param_1);
      break;
    case 0xf:
      FUN_18058ad90(param_1,puVar14);
      break;
    case 0x10:
      *(short *)((longlong)param_1 + 0x18c) = (short)*puVar14;
      break;
    case 0x11:
      *(short *)((longlong)param_1 + 0x18e) = (short)*puVar14;
      break;
    case 0x12:
      *(short *)(param_1 + 0x32) = (short)*puVar14;
      break;
    case 0x13:
      if (*puVar14 == 0) {
        param_1[8] = param_1[0x24];
        param_1[9] = param_1[0x25];
        uVar24 = (undefined4)param_1[0x28];
        uVar25 = *(undefined4 *)((longlong)param_1 + 0x144);
        uVar26 = (undefined4)param_1[0x29];
        uVar27 = *(undefined4 *)((longlong)param_1 + 0x14c);
        param_1[10] = param_1[0x26];
        param_1[0xb] = param_1[0x27];
        uVar28 = (undefined4)param_1[0x2a];
        uVar29 = (undefined4)((ulonglong)param_1[0x2a] >> 0x20);
      }
      else {
        if (*puVar14 != 1) {
          cVar2 = *(char *)((longlong)param_1 + 0x2c6);
          goto joined_r0x00018058f0c1;
        }
        param_1[8] = param_1[0x1d];
        param_1[9] = param_1[0x1e];
        uVar24 = (undefined4)param_1[0x21];
        uVar25 = *(undefined4 *)((longlong)param_1 + 0x10c);
        uVar26 = (undefined4)param_1[0x22];
        uVar27 = *(undefined4 *)((longlong)param_1 + 0x114);
        param_1[10] = param_1[0x1f];
        param_1[0xb] = param_1[0x20];
        uVar28 = (undefined4)param_1[0x23];
        uVar29 = (undefined4)((ulonglong)param_1[0x23] >> 0x20);
      }
      *(undefined4 *)(param_1 + 0xc) = uVar24;
      *(undefined4 *)((longlong)param_1 + 100) = uVar25;
      *(undefined4 *)(param_1 + 0xd) = uVar26;
      *(undefined4 *)((longlong)param_1 + 0x6c) = uVar27;
      param_1[0xe] = CONCAT44(uVar29,uVar28);
      *(short *)((longlong)param_1 + 0x192) = (short)*puVar14;
      break;
    case 0x14:
      if (*puVar14 == 0) {
        param_1[0xf] = param_1[0x24];
        param_1[0x10] = param_1[0x25];
        uVar24 = (undefined4)param_1[0x28];
        uVar25 = *(undefined4 *)((longlong)param_1 + 0x144);
        uVar26 = (undefined4)param_1[0x29];
        uVar27 = *(undefined4 *)((longlong)param_1 + 0x14c);
        param_1[0x11] = param_1[0x26];
        param_1[0x12] = param_1[0x27];
        uVar28 = (undefined4)param_1[0x2a];
        uVar29 = (undefined4)((ulonglong)param_1[0x2a] >> 0x20);
      }
      else {
        if (*puVar14 != 1) {
          cVar2 = *(char *)((longlong)param_1 + 0x2c6);
          goto joined_r0x00018058f0c1;
        }
        param_1[0xf] = param_1[0x1d];
        param_1[0x10] = param_1[0x1e];
        uVar24 = (undefined4)param_1[0x21];
        uVar25 = *(undefined4 *)((longlong)param_1 + 0x10c);
        uVar26 = (undefined4)param_1[0x22];
        uVar27 = *(undefined4 *)((longlong)param_1 + 0x114);
        param_1[0x11] = param_1[0x1f];
        param_1[0x12] = param_1[0x20];
        uVar28 = (undefined4)param_1[0x23];
        uVar29 = (undefined4)((ulonglong)param_1[0x23] >> 0x20);
      }
      *(undefined4 *)(param_1 + 0x13) = uVar24;
      *(undefined4 *)((longlong)param_1 + 0x9c) = uVar25;
      *(undefined4 *)(param_1 + 0x14) = uVar26;
      *(undefined4 *)((longlong)param_1 + 0xa4) = uVar27;
      param_1[0x15] = CONCAT44(uVar29,uVar28);
      *(short *)((longlong)param_1 + 0x194) = (short)*puVar14;
      break;
    case 0x15:
      if (*puVar14 == 0) {
        param_1[0x16] = param_1[0x24];
        param_1[0x17] = param_1[0x25];
        uVar24 = (undefined4)param_1[0x28];
        uVar25 = *(undefined4 *)((longlong)param_1 + 0x144);
        uVar26 = (undefined4)param_1[0x29];
        uVar27 = *(undefined4 *)((longlong)param_1 + 0x14c);
        param_1[0x18] = param_1[0x26];
        param_1[0x19] = param_1[0x27];
        uVar28 = (undefined4)param_1[0x2a];
        uVar29 = (undefined4)((ulonglong)param_1[0x2a] >> 0x20);
      }
      else {
        if (*puVar14 != 1) {
          cVar2 = *(char *)((longlong)param_1 + 0x2c6);
          goto joined_r0x00018058f0c1;
        }
        param_1[0x16] = param_1[0x1d];
        param_1[0x17] = param_1[0x1e];
        uVar24 = (undefined4)param_1[0x21];
        uVar25 = *(undefined4 *)((longlong)param_1 + 0x10c);
        uVar26 = (undefined4)param_1[0x22];
        uVar27 = *(undefined4 *)((longlong)param_1 + 0x114);
        param_1[0x18] = param_1[0x1f];
        param_1[0x19] = param_1[0x20];
        uVar28 = (undefined4)param_1[0x23];
        uVar29 = (undefined4)((ulonglong)param_1[0x23] >> 0x20);
      }
      *(undefined4 *)(param_1 + 0x1a) = uVar24;
      *(undefined4 *)((longlong)param_1 + 0xd4) = uVar25;
      *(undefined4 *)(param_1 + 0x1b) = uVar26;
      *(undefined4 *)((longlong)param_1 + 0xdc) = uVar27;
      param_1[0x1c] = CONCAT44(uVar29,uVar28);
      *(short *)((longlong)param_1 + 0x196) = (short)*puVar14;
      break;
    case 0x16:
      if (*puVar14 == 0) {
        param_1[8] = param_1[0x24];
        param_1[9] = param_1[0x25];
        uVar24 = (undefined4)param_1[0x28];
        uVar25 = *(undefined4 *)((longlong)param_1 + 0x144);
        uVar26 = (undefined4)param_1[0x29];
        uVar27 = *(undefined4 *)((longlong)param_1 + 0x14c);
        param_1[10] = param_1[0x26];
        param_1[0xb] = param_1[0x27];
        uVar28 = (undefined4)param_1[0x2a];
        uVar29 = (undefined4)((ulonglong)param_1[0x2a] >> 0x20);
      }
      else {
        if (*puVar14 != 1) {
          cVar2 = *(char *)((longlong)param_1 + 0x2c6);
          goto joined_r0x00018058f0c1;
        }
        param_1[8] = param_1[0x1d];
        param_1[9] = param_1[0x1e];
        uVar24 = (undefined4)param_1[0x21];
        uVar25 = *(undefined4 *)((longlong)param_1 + 0x10c);
        uVar26 = (undefined4)param_1[0x22];
        uVar27 = *(undefined4 *)((longlong)param_1 + 0x114);
        param_1[10] = param_1[0x1f];
        param_1[0xb] = param_1[0x20];
        uVar28 = (undefined4)param_1[0x23];
        uVar29 = (undefined4)((ulonglong)param_1[0x23] >> 0x20);
      }
      *(undefined4 *)(param_1 + 0xc) = uVar24;
      *(undefined4 *)((longlong)param_1 + 100) = uVar25;
      *(undefined4 *)(param_1 + 0xd) = uVar26;
      *(undefined4 *)((longlong)param_1 + 0x6c) = uVar27;
      param_1[0xe] = CONCAT44(uVar29,uVar28);
      param_1[0xf] = param_1[8];
      param_1[0x10] = param_1[9];
      param_1[0x11] = param_1[10];
      param_1[0x12] = param_1[0xb];
      param_1[0x13] = param_1[0xc];
      param_1[0x14] = param_1[0xd];
      param_1[0x15] = param_1[0xe];
      param_1[0x16] = param_1[8];
      param_1[0x17] = param_1[9];
      param_1[0x18] = param_1[10];
      param_1[0x19] = param_1[0xb];
      *(int *)(param_1 + 0x1a) = (int)param_1[0xc];
      *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_1 + 100);
      *(int *)(param_1 + 0x1b) = (int)param_1[0xd];
      *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_1 + 0x6c);
      param_1[0x1c] = param_1[0xe];
      *(short *)((longlong)param_1 + 0x192) = (short)*puVar14;
      *(short *)((longlong)param_1 + 0x194) = (short)*puVar14;
      *(short *)((longlong)param_1 + 0x196) = (short)*puVar14;
      break;
    case 0x17:
      uVar16 = *puVar14;
      if ((int)uVar16 < 0) goto LAB_18058f9e0;
      if (0xffff < (int)uVar16) {
        uVar16 = 0xffff;
      }
      *(uint *)((longlong)param_1 + 0x1a4) = uVar16;
      break;
    case 0x18:
      *(undefined4 *)(param_1 + 0x35) = 1;
      param_1[0x59] = (longlong)FUN_18058c7d0;
      break;
    case 0x19:
      *(undefined4 *)(param_1 + 0x35) = 0;
      param_1[0x59] = (longlong)FUN_18058c810;
      break;
    case 0x1a:
      *(uint *)((longlong)param_1 + 0x1bc) = *puVar14;
      break;
    case 0x1b:
      iVar12 = 1;
      do {
        iVar20 = *(int *)((longlong)param_1 + 500) + (int)param_1[0x3d];
        *(int *)(param_1 + 0x3d) = iVar20;
        if (*(int *)((longlong)param_1 + 0x1ec) <= iVar20) goto LAB_18058ff27;
        bVar11 = *(byte *)((longlong)iVar20 + param_1[0x3c]);
        *(byte *)(param_1 + 0x3e) = bVar11;
        iVar18 = (int)(char)(&DAT_18066f000)[bVar11];
        *(int *)((longlong)param_1 + 500) = iVar18;
        if (iVar18 < 0) {
          if (*(int *)((longlong)param_1 + 0x1ec) <= iVar20 + 1) goto LAB_18058ff27;
          *(uint *)((longlong)param_1 + 500) =
               2 - (uint)((byte *)((longlong)iVar20 + param_1[0x3c]))[1] * iVar18;
        }
        if (bVar11 == 0x58) {
          iVar12 = iVar12 + 1;
        }
        else if (bVar11 == 0x59) {
          iVar12 = iVar12 + -1;
        }
      } while (iVar12 != 0);
      break;
    case 0x1c:
switchD_18058e13d_caseD_1c:
      if ((*puVar14 != 0) || (iVar20 != 0)) {
        iVar12 = (int)param_1[0x3d] + *puVar14;
        *(int *)(param_1 + 0x3d) = iVar12;
        if ((-1 < iVar12) &&
           (((int)param_1[0x4a] < 1 ||
            (iVar12 <= *(int *)(*(longlong *)
                                 (param_1[0x4b] + -8 + (longlong)(int)param_1[0x4a] * 0x18) + 8)))))
        {
          *(undefined4 *)((longlong)param_1 + 500) = 0;
          if (((int)*puVar14 < 0) &&
             (*(int *)((longlong)param_1 + 0x334) = *(int *)((longlong)param_1 + 0x334) + 1,
             *(uint *)(param_1 + 0x67) < *(uint *)((longlong)param_1 + 0x334))) goto LAB_18058f9d4;
          break;
        }
      }
LAB_18058f9e0:
      *(undefined4 *)(param_1 + 4) = 0x84;
      break;
    case 0x1d:
      *(uint *)(param_1 + 0x38) = *puVar14;
      break;
    case 0x1e:
      *(uint *)((longlong)param_1 + 0x1c4) = *puVar14;
      break;
    case 0x1f:
      lVar21 = (longlong)*(int *)((longlong)param_1 + 0x184) * (longlong)(int)*puVar14;
      *(int *)(param_1 + 0x39) = (int)((ulonglong)(lVar21 + (lVar21 >> 0x3f) + 0x8000) >> 0x10);
      break;
    case 0x20:
      puVar14[1] = *puVar14;
      break;
    case 0x21:
    case 0x59:
    case 0x7e:
    case 0x7f:
      break;
    case 0x22:
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
      break;
    case 0x23:
      uVar16 = *puVar14;
      *puVar14 = puVar14[1];
      puVar14[1] = uVar16;
      break;
    case 0x24:
      *puVar14 = *(uint *)((longlong)param_1 + 0x24);
      break;
    case 0x25:
      uVar16 = *puVar14;
      if (((int)uVar16 < 1) || (iVar20 < (int)uVar16)) {
        if (*(char *)((longlong)param_1 + 0x2c6) != '\0') {
          *(undefined4 *)(param_1 + 4) = 0x86;
        }
        *puVar14 = 0;
      }
      else {
        *puVar14 = puVar14[-(longlong)(int)uVar16];
      }
      break;
    case 0x26:
      uVar16 = *puVar14;
      if (((int)uVar16 < 1) || (iVar20 < (int)uVar16)) goto LAB_18058fdae;
      puVar9 = puVar14 + -(longlong)(int)uVar16;
      uVar16 = *puVar9;
      FUN_18063aed0(puVar9,puVar9 + 1);
      puVar14[-1] = uVar16;
      break;
    case 0x27:
      uVar15 = (ushort)*puVar14;
      if (uVar15 < *(ushort *)(param_1 + 0xf)) {
        uVar6 = (ushort)puVar14[1];
        if (uVar6 < *(ushort *)(param_1 + 8)) {
          piVar1 = (int *)(param_1[0x11] + (ulonglong)uVar15 * 8);
          iVar12 = (*(code *)param_1[0x5b])
                             (param_1,*(int *)(param_1[10] + (ulonglong)uVar6 * 8) - *piVar1,
                              *(int *)(param_1[10] + 4 + (ulonglong)uVar6 * 8) - piVar1[1]);
          (*(code *)param_1[0x5e])(param_1,param_1 + 0xf,uVar15,iVar12 / 2);
          (*(code *)param_1[0x5e])(param_1,param_1 + 8,uVar6,-(iVar12 / 2));
          break;
        }
      }
LAB_18058fdae:
      cVar2 = *(char *)((longlong)param_1 + 0x2c6);
joined_r0x00018058f0c1:
      if (cVar2 != '\0') goto LAB_18058fe17;
      break;
    case 0x28:
    case 0x7b:
    case 0x83:
    case 0x84:
    case 0x8f:
    case 0x90:
switchD_18058e13d_caseD_28:
      FUN_18058c3e0(param_1);
      break;
    case 0x29:
      if (*(ushort *)(param_1 + 8) <= (ushort)*puVar14) {
        cVar2 = *(char *)((longlong)param_1 + 0x2c6);
        goto joined_r0x00018058f0c1;
      }
      bVar11 = 0xf7;
      if ((short)param_1[0x34] == 0) {
        bVar11 = 0xff;
      }
      pbVar13 = (byte *)(param_1[0xc] + (ulonglong)(ushort)*puVar14);
      bVar5 = bVar11 & 0xef;
      if (*(short *)((longlong)param_1 + 0x1a2) == 0) {
        bVar5 = bVar11;
      }
      *pbVar13 = *pbVar13 & bVar5;
      break;
    case 0x2a:
      uVar16 = puVar14[1];
      uVar7 = (int)param_1[0x49] + 1;
      if (uVar16 < uVar7) {
        puVar4 = (undefined4 *)param_1[0x46];
        if (puVar4 != (undefined4 *)0x0) {
          puVar17 = puVar4 + (ulonglong)uVar16 * 5;
        }
        if ((uVar7 == *(uint *)(param_1 + 0x45)) && (puVar17[3] == uVar16)) {
LAB_18058e8f8:
          if (*(char *)(puVar17 + 4) != '\0') {
            if ((int)param_1[0x4a] < *(int *)((longlong)param_1 + 0x254)) {
              if (0 < (int)*puVar14) {
                puVar4 = (undefined4 *)(param_1[0x4b] + (longlong)(int)param_1[0x4a] * 0x18);
                *puVar4 = *(undefined4 *)((longlong)param_1 + 0x1dc);
                puVar4[1] = (int)param_1[0x3d] + 1;
                puVar4[2] = *puVar14;
                *(undefined4 **)(puVar4 + 4) = puVar17;
                *(int *)(param_1 + 0x4a) = (int)param_1[0x4a] + 1;
                FUN_18058a840(param_1,*puVar17);
                *(int *)((longlong)param_1 + 0x32c) = *(int *)((longlong)param_1 + 0x32c) + *puVar14
                ;
                if (*(uint *)(param_1 + 0x66) < *(uint *)((longlong)param_1 + 0x32c))
                goto LAB_18058f9d4;
              }
              break;
            }
LAB_18058ff3c:
            *(undefined4 *)(param_1 + 4) = 0x82;
            break;
          }
        }
        else if (puVar4 != (undefined4 *)0x0) {
          for (puVar17 = puVar4; puVar17 < puVar4 + (ulonglong)*(uint *)(param_1 + 0x45) * 5;
              puVar17 = puVar17 + 5) {
            if (puVar17[3] == uVar16) goto LAB_18058e8f8;
          }
          if (puVar17 != puVar4 + (ulonglong)*(uint *)(param_1 + 0x45) * 5) goto LAB_18058e8f8;
        }
      }
      goto LAB_18058fe17;
    case 0x2b:
      uVar16 = *puVar14;
      uVar7 = (int)param_1[0x49] + 1;
      if ((uVar16 < uVar7) && (puVar17 = (undefined4 *)param_1[0x46], puVar17 != (undefined4 *)0x0))
      {
        puVar4 = puVar17 + (ulonglong)uVar16 * 5;
        if ((uVar7 != *(uint *)(param_1 + 0x45)) || (puVar4[3] != uVar16)) {
          for (puVar4 = puVar17; puVar4 < puVar17 + (ulonglong)*(uint *)(param_1 + 0x45) * 5;
              puVar4 = puVar4 + 5) {
            if (puVar4[3] == uVar16) goto LAB_18058e9e8;
          }
          if (puVar4 == puVar17 + (ulonglong)*(uint *)(param_1 + 0x45) * 5) goto LAB_18058fe17;
        }
LAB_18058e9e8:
        if (*(char *)(puVar4 + 4) != '\0') {
          if (*(int *)((longlong)param_1 + 0x254) <= (int)param_1[0x4a]) goto LAB_18058ff3c;
          puVar17 = (undefined4 *)(param_1[0x4b] + (longlong)(int)param_1[0x4a] * 0x18);
          *puVar17 = *(undefined4 *)((longlong)param_1 + 0x1dc);
          lVar21 = param_1[0x3d];
          puVar17[2] = 1;
          puVar17[1] = (int)lVar21 + 1;
          *(undefined4 **)(puVar17 + 4) = puVar4;
          *(int *)(param_1 + 0x4a) = (int)param_1[0x4a] + 1;
          FUN_18058a840(param_1,*puVar4);
          break;
        }
      }
LAB_18058fe17:
      *(undefined4 *)(param_1 + 4) = 0x86;
      break;
    case 0x2c:
      FUN_18058a540(param_1,puVar14);
      break;
    case 0x2d:
      iVar12 = (int)param_1[0x4a];
      if (iVar12 < 1) {
        *(undefined4 *)(param_1 + 4) = 0x88;
      }
      else {
        *(int *)(param_1 + 0x4a) = iVar12 + -1;
        lVar21 = param_1[0x4b];
        piVar1 = (int *)(lVar21 + -0x10 + (longlong)iVar12 * 0x18);
        *piVar1 = *piVar1 + -1;
        lVar21 = lVar21 + (longlong)iVar12 * 0x18;
        if (*(int *)(lVar21 + -0x10) < 1) {
          FUN_18058a840(param_1,*(undefined4 *)(lVar21 + -0x18));
        }
        else {
          *(int *)(param_1 + 0x4a) = (int)param_1[0x4a] + 1;
          *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(*(longlong *)(lVar21 + -8) + 4);
          *(undefined4 *)((longlong)param_1 + 500) = 0;
        }
      }
      break;
    case 0x2e:
    case 0x2f:
      uVar15 = (ushort)*puVar14;
      if (*(ushort *)(param_1 + 8) <= uVar15) {
        cVar2 = *(char *)((longlong)param_1 + 0x2c6);
        goto joined_r0x00018058f0c1;
      }
      if ((uVar8 & 1) != 0) {
        iVar12 = (*(code *)param_1[0x5b])
                           (param_1,*(undefined4 *)(param_1[10] + (ulonglong)uVar15 * 8),
                            *(undefined4 *)(param_1[10] + 4 + (ulonglong)uVar15 * 8));
        iVar20 = (*(code *)param_1[0x59])(param_1,iVar12,0);
        puVar17 = (undefined4 *)(ulonglong)(uint)(iVar20 - iVar12);
      }
      (*(code *)param_1[0x5e])(param_1,param_1 + 8,uVar15,puVar17);
      *(ushort *)((longlong)param_1 + 0x18c) = uVar15;
      *(ushort *)((longlong)param_1 + 0x18e) = uVar15;
      break;
    case 0x30:
    case 0x31:
      FUN_18058b060(param_1);
      break;
    case 0x32:
    case 0x33:
      FUN_18058bda0(param_1,puVar14);
      break;
    case 0x34:
    case 0x35:
      FUN_18058bb70(param_1,puVar14);
      break;
    case 0x36:
    case 0x37:
      FUN_18058c120(param_1,puVar14);
      break;
    case 0x38:
      FUN_18058bf70(param_1,puVar14);
      break;
    case 0x39:
      FUN_18058aa50(param_1,puVar14);
      break;
    case 0x3a:
    case 0x3b:
      uVar15 = (ushort)*puVar14;
      uVar8 = (ulonglong)uVar15;
      if ((*(ushort *)(param_1 + 0xf) <= uVar15) ||
         (*(ushort *)(param_1 + 8) <= *(ushort *)((longlong)param_1 + 0x18c))) goto LAB_18058fdae;
      if (*(short *)((longlong)param_1 + 0x194) == 0) {
        lVar21 = uVar8 * 8;
        *(undefined8 *)(lVar21 + param_1[0x10]) =
             *(undefined8 *)(param_1[9] + (ulonglong)*(ushort *)((longlong)param_1 + 0x18c) * 8);
        (*(code *)param_1[0x5f])(param_1,param_1 + 0xf,uVar15,puVar14[1]);
        *(undefined8 *)(lVar21 + param_1[0x11]) = *(undefined8 *)(lVar21 + param_1[0x10]);
      }
      iVar12 = (*(code *)param_1[0x5b])
                         (param_1,*(int *)(param_1[0x11] + uVar8 * 8) -
                                  *(int *)(param_1[10] +
                                          (ulonglong)*(ushort *)((longlong)param_1 + 0x18c) * 8),
                          *(int *)(param_1[0x11] + 4 + uVar8 * 8) -
                          *(int *)(param_1[10] + 4 +
                                  (ulonglong)*(ushort *)((longlong)param_1 + 0x18c) * 8));
      (*(code *)param_1[0x5e])(param_1,param_1 + 0xf,uVar15,puVar14[1] - iVar12);
      *(undefined2 *)((longlong)param_1 + 0x18e) = *(undefined2 *)((longlong)param_1 + 0x18c);
      *(ushort *)(param_1 + 0x32) = uVar15;
      if ((*(byte *)(param_1 + 0x3e) & 1) != 0) {
        *(ushort *)((longlong)param_1 + 0x18c) = uVar15;
      }
      break;
    case 0x3c:
      iVar12 = *(int *)((longlong)param_1 + 0x1a4);
      if (iVar18 < iVar12) {
        if (*(char *)((longlong)param_1 + 0x2c6) == '\0') goto LAB_18058fab5;
        *(undefined4 *)(param_1 + 4) = 0x81;
        *(undefined4 *)((longlong)param_1 + 0x1a4) = 1;
      }
      else {
        *(int *)((longlong)param_1 + 0x3c) = iVar18 - iVar12;
        if (*(ushort *)((longlong)param_1 + 0x18c) < *(ushort *)(param_1 + 8)) {
          if (iVar12 == 0) goto LAB_18058fab5;
          do {
            uVar15 = (ushort)puVar14[-1];
            puVar14 = puVar14 + -1;
            iVar12 = iVar12 + -1;
            if (uVar15 < *(ushort *)(param_1 + 0xf)) {
              iVar20 = (*(code *)param_1[0x5b])
                                 (param_1,*(int *)(param_1[0x11] + (ulonglong)uVar15 * 8) -
                                          *(int *)(param_1[10] +
                                                  (ulonglong)*(ushort *)((longlong)param_1 + 0x18c)
                                                  * 8),
                                  *(int *)(param_1[0x11] + 4 + (ulonglong)uVar15 * 8) -
                                  *(int *)(param_1[10] + 4 +
                                          (ulonglong)*(ushort *)((longlong)param_1 + 0x18c) * 8));
              (*(code *)param_1[0x5e])(param_1,param_1 + 0xf,uVar15,-iVar20);
            }
            else if (*(char *)((longlong)param_1 + 0x2c6) != '\0') goto LAB_18058fe17;
          } while (iVar12 != 0);
          *(undefined4 *)((longlong)param_1 + 0x1a4) = 1;
        }
        else {
          if (*(char *)((longlong)param_1 + 0x2c6) == '\0') goto LAB_18058fab5;
          *(undefined4 *)(param_1 + 4) = 0x86;
          *(undefined4 *)((longlong)param_1 + 0x1a4) = 1;
        }
      }
      break;
    case 0x3d:
      *(undefined4 *)(param_1 + 0x35) = 2;
      param_1[0x59] = (longlong)FUN_18058c790;
      break;
    case 0x3e:
    case 0x3f:
      uVar15 = (ushort)*puVar14;
      uVar8 = (ulonglong)uVar15;
      if ((uVar15 < *(ushort *)(param_1 + 8)) && (puVar14[1] < *(uint *)(param_1 + 0x3f))) {
        iVar12 = (*(code *)param_1[0x61])(param_1);
        if (*(short *)((longlong)param_1 + 0x192) == 0) {
          lVar21 = uVar8 * 8;
          lVar10 = (longlong)(short)param_1[0x34] * (longlong)iVar12;
          *(int *)(lVar21 + param_1[9]) = (int)(lVar10 + (lVar10 >> 0x3f) + 0x2000 >> 0xe);
          lVar10 = (longlong)*(short *)((longlong)param_1 + 0x1a2) * (longlong)iVar12;
          *(int *)(lVar21 + 4 + param_1[9]) = (int)(lVar10 + (lVar10 >> 0x3f) + 0x2000 >> 0xe);
          *(undefined8 *)(lVar21 + param_1[10]) = *(undefined8 *)(lVar21 + param_1[9]);
        }
        iVar20 = (*(code *)param_1[0x5b])
                           (param_1,*(undefined4 *)(param_1[10] + uVar8 * 8),
                            *(undefined4 *)(param_1[10] + 4 + uVar8 * 8));
        if ((*(byte *)(param_1 + 0x3e) & 1) != 0) {
          iVar18 = iVar12 - iVar20;
          if (iVar18 < 0) {
            iVar18 = iVar20 - iVar12;
          }
          if ((int)param_1[0x38] < iVar18) {
            iVar12 = iVar20;
          }
          iVar12 = (*(code *)param_1[0x59])(param_1,iVar12,0);
        }
        (*(code *)param_1[0x5e])(param_1,param_1 + 8,uVar15,iVar12 - iVar20);
        *(ushort *)((longlong)param_1 + 0x18c) = uVar15;
        *(ushort *)((longlong)param_1 + 0x18e) = uVar15;
      }
      else {
        if (*(char *)((longlong)param_1 + 0x2c6) != '\0') {
          *(undefined4 *)(param_1 + 4) = 0x86;
        }
        *(ushort *)((longlong)param_1 + 0x18c) = uVar15;
        *(ushort *)((longlong)param_1 + 0x18e) = uVar15;
      }
      break;
    case 0x40:
      iVar20 = (int)param_1[0x3d] + 1;
      if (iVar20 < *(int *)((longlong)param_1 + 0x1ec)) {
        lVar21 = (longlong)iVar20;
        bVar11 = *(byte *)(lVar21 + param_1[0x3c]);
        uVar16 = (uint)bVar11;
        if ((int)(iVar20 + (uint)bVar11) < *(int *)((longlong)param_1 + 0x1ec)) {
          uVar7 = (uint)bVar11;
          if ((iVar12 - *(int *)((longlong)param_1 + 0x24)) + 1U <= uVar7) goto LAB_18058ff3c;
          if (uVar7 != 0) {
            iVar20 = iVar20 + uVar7;
            do {
              lVar21 = lVar21 + 1;
              puVar14[(longlong)puVar17] = (uint)*(byte *)(param_1[0x3c] + lVar21);
              puVar17 = (undefined4 *)((longlong)puVar17 + 1);
            } while ((longlong)puVar17 < (longlong)(ulonglong)bVar11);
          }
LAB_18058ef3b:
          *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + uVar16;
          *(int *)(param_1 + 0x3d) = iVar20;
          break;
        }
      }
      goto LAB_18058ff27;
    case 0x41:
      iVar20 = (int)param_1[0x3d] + 1;
      if (iVar20 < *(int *)((longlong)param_1 + 0x1ec)) {
        lVar21 = (longlong)iVar20;
        bVar11 = *(byte *)(lVar21 + param_1[0x3c]);
        uVar16 = (uint)bVar11;
        if ((int)(iVar20 + (uint)bVar11 * 2) < *(int *)((longlong)param_1 + 0x1ec)) {
          uVar7 = (uint)bVar11;
          if ((iVar12 - *(int *)((longlong)param_1 + 0x24)) + 1U <= uVar7) goto LAB_18058ff3c;
          if (uVar7 == 0) goto LAB_18058ef3b;
          do {
            lVar21 = lVar21 + 2;
            puVar14[(longlong)puVar17] =
                 (int)(short)((ushort)*(byte *)(param_1[0x3c] + -1 + lVar21) << 8) |
                 (uint)*(byte *)(param_1[0x3c] + lVar21);
            puVar17 = (undefined4 *)((longlong)puVar17 + 1);
          } while ((longlong)puVar17 < (longlong)(ulonglong)bVar11);
          *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + uVar7;
          *(uint *)(param_1 + 0x3d) = iVar20 + (uint)bVar11 * 2;
          break;
        }
      }
LAB_18058ff27:
      *(undefined4 *)(param_1 + 4) = 0x83;
      break;
    case 0x42:
      uVar16 = *puVar14;
      if (*(ushort *)(param_1 + 0x53) <= uVar16) {
        cVar2 = *(char *)((longlong)param_1 + 0x2c6);
        goto joined_r0x00018058f0c1;
      }
      if (((int)param_1[0x3b] == 3) && (param_1[0x54] != param_1[0x56])) {
        lVar21 = FUN_18057ac40(param_1[2],4,(short)param_1[0x55],*(ushort *)(param_1 + 0x53),
                               param_1[0x56],local_res8);
        param_1[0x56] = lVar21;
        *(int *)(param_1 + 4) = local_res8[0];
        if (local_res8[0] != 0) break;
        *(short *)(param_1 + 0x55) = (short)param_1[0x53];
        FUN_18063aed0(lVar21,param_1[0x54]);
        param_1[0x54] = param_1[0x56];
      }
      *(uint *)(param_1[0x54] + (ulonglong)uVar16 * 4) = puVar14[1];
      break;
    case 0x43:
      if (*puVar14 < (uint)*(ushort *)(param_1 + 0x53)) {
        *puVar14 = *(uint *)(param_1[0x54] + (ulonglong)*puVar14 * 4);
      }
      else {
LAB_18058f0eb:
        if (*(char *)((longlong)param_1 + 0x2c6) != '\0') goto LAB_18058fe17;
        *puVar14 = 0;
      }
      break;
    case 0x44:
      if (*(uint *)(param_1 + 0x3f) <= *puVar14) {
        cVar2 = *(char *)((longlong)param_1 + 0x2c6);
        goto joined_r0x00018058f0c1;
      }
      (*(code *)param_1[0x62])(param_1);
      break;
    case 0x45:
      if (*(uint *)(param_1 + 0x3f) <= *puVar14) goto LAB_18058f0eb;
      uVar16 = (*(code *)param_1[0x61])(param_1);
      *puVar14 = uVar16;
      break;
    case 0x46:
    case 0x47:
      if (*puVar14 < (uint)*(ushort *)(param_1 + 0x16)) {
        if ((uVar8 & 1) == 0) {
          lVar21 = param_1[0x18];
          pcVar19 = (code *)param_1[0x5b];
        }
        else {
          lVar21 = param_1[0x17];
          pcVar19 = (code *)param_1[0x5c];
        }
        uVar16 = (*pcVar19)(param_1,*(undefined4 *)(lVar21 + (ulonglong)*puVar14 * 8));
        *puVar14 = uVar16;
      }
      else {
        if (*(char *)((longlong)param_1 + 0x2c6) != '\0') {
          *(undefined4 *)(param_1 + 4) = 0x86;
        }
        *puVar14 = 0;
      }
      break;
    case 0x48:
      uVar15 = (ushort)*puVar14;
      if (*(ushort *)(param_1 + 0x16) <= uVar15) {
        cVar2 = *(char *)((longlong)param_1 + 0x2c6);
        goto joined_r0x00018058f0c1;
      }
      lVar21 = (ulonglong)uVar15 * 8;
      iVar12 = (*(code *)param_1[0x5b])
                         (param_1,*(undefined4 *)(param_1[0x18] + lVar21),
                          *(undefined4 *)(param_1[0x18] + 4 + lVar21));
      (*(code *)param_1[0x5e])(param_1,param_1 + 0x16,uVar15,puVar14[1] - iVar12);
      if (*(short *)((longlong)param_1 + 0x196) == 0) {
        *(undefined8 *)(lVar21 + param_1[0x17]) = *(undefined8 *)(lVar21 + param_1[0x18]);
      }
      break;
    case 0x49:
    case 0x4a:
      FUN_18058b2d0(param_1,puVar14);
      break;
    case 0x4b:
      uVar16 = (*(code *)param_1[0x60])(param_1);
      *puVar14 = uVar16;
      break;
    case 0x4c:
      if (*(int *)(*(longlong *)(*param_1 + 0x90) + 0x70) == 0x23) {
        uVar16 = (*(code *)param_1[0x60])(param_1);
        *puVar14 = uVar16;
      }
      else {
        *puVar14 = *(uint *)(param_1 + 0x2b);
      }
      break;
    case 0x4d:
      *(undefined1 *)(param_1 + 0x3a) = 1;
      break;
    case 0x4e:
      *(undefined1 *)(param_1 + 0x3a) = 0;
      break;
    case 0x4f:
      *(undefined4 *)(param_1 + 4) = 0x87;
      break;
    case 0x50:
      *puVar14 = (uint)((int)*puVar14 < (int)puVar14[1]);
      break;
    case 0x51:
      *puVar14 = (uint)((int)*puVar14 <= (int)puVar14[1]);
      break;
    case 0x52:
      *puVar14 = (uint)((int)puVar14[1] < (int)*puVar14);
      break;
    case 0x53:
      *puVar14 = (uint)((int)puVar14[1] <= (int)*puVar14);
      break;
    case 0x54:
      *puVar14 = (uint)(*puVar14 == puVar14[1]);
      break;
    case 0x55:
      *puVar14 = (uint)(*puVar14 != puVar14[1]);
      break;
    case 0x56:
      uVar16 = *puVar14;
      if ((code *)param_1[0x59] == FUN_18058c790) {
        if ((int)uVar16 < 0) {
          uVar16 = -(0x10 - uVar16 & 0xffffffe0);
          if (0 < (int)uVar16) {
            uVar16 = uVar7;
          }
          *puVar14 = uVar16 >> 6 & 1;
        }
        else {
          uVar16 = uVar16 + 0x10 & 0xffffffe0;
          if (-1 < (int)uVar16) {
            puVar17 = (undefined4 *)(ulonglong)uVar16;
          }
          *puVar14 = (uint)((ulonglong)puVar17 >> 6) & 1;
        }
      }
      else {
        uVar16 = (*(code *)param_1[0x59])(param_1);
        *puVar14 = uVar16 >> 6 & 1;
      }
      break;
    case 0x57:
      uVar16 = *puVar14;
      if ((code *)param_1[0x59] == FUN_18058c790) {
        if ((int)uVar16 < 0) {
          uVar16 = -(0x10 - uVar16 & 0xffffffe0);
          if (0 < (int)uVar16) {
            uVar16 = uVar7;
          }
          *puVar14 = ~(uVar16 >> 6) & 1;
        }
        else {
          uVar16 = uVar16 + 0x10 & 0xffffffe0;
          if (-1 < (int)uVar16) {
            puVar17 = (undefined4 *)(ulonglong)uVar16;
          }
          *puVar14 = ~(uint)((ulonglong)puVar17 >> 6) & 1;
        }
      }
      else {
        uVar16 = (*(code *)param_1[0x59])(param_1);
        *puVar14 = ~(uVar16 >> 6) & 1;
      }
      break;
    case 0x58:
      if (*puVar14 == 0) {
        bVar23 = false;
        iVar12 = 1;
        do {
          iVar20 = (int)param_1[0x3d] + *(int *)((longlong)param_1 + 500);
          *(int *)(param_1 + 0x3d) = iVar20;
          if (*(int *)((longlong)param_1 + 0x1ec) <= iVar20) goto LAB_18058ff27;
          bVar11 = *(byte *)((longlong)iVar20 + param_1[0x3c]);
          *(byte *)(param_1 + 0x3e) = bVar11;
          iVar18 = (int)(char)(&DAT_18066f000)[bVar11];
          *(int *)((longlong)param_1 + 500) = iVar18;
          if (iVar18 < 0) {
            if (*(int *)((longlong)param_1 + 0x1ec) <= iVar20 + 1) goto LAB_18058ff27;
            *(uint *)((longlong)param_1 + 500) =
                 2 - (uint)((byte *)((longlong)iVar20 + param_1[0x3c]))[1] * iVar18;
          }
          iVar20 = iVar12;
          if (bVar11 == 0x1b) {
LAB_18058f45a:
            bVar23 = iVar12 == 1;
            iVar12 = iVar20;
          }
          else if (bVar11 == 0x58) {
            iVar12 = iVar12 + 1;
          }
          else if (bVar11 == 0x59) {
            iVar20 = iVar12 + -1;
            goto LAB_18058f45a;
          }
        } while (!bVar23);
      }
      break;
    case 0x5a:
      if ((*puVar14 == 0) || (puVar4 = (undefined4 *)0x1, puVar14[1] == 0)) {
        puVar4 = puVar17;
      }
      *puVar14 = (uint)puVar4;
      break;
    case 0x5b:
      if ((*puVar14 != 0) || (puVar14[1] != 0)) {
        puVar17 = (undefined4 *)0x1;
      }
      *puVar14 = (uint)puVar17;
      break;
    case 0x5c:
      *puVar14 = (uint)(*puVar14 == 0);
      break;
    case 0x5d:
    case 0x71:
    case 0x72:
      FUN_18058a3e0(param_1,puVar14);
      break;
    case 0x5e:
      *(short *)((longlong)param_1 + 0x1cc) = (short)*puVar14;
      break;
    case 0x5f:
      if (6 < *puVar14) goto LAB_18058f9e0;
      *(short *)((longlong)param_1 + 0x1ce) = (short)*puVar14;
      break;
    case 0x60:
      *puVar14 = *puVar14 + puVar14[1];
      break;
    case 0x61:
      *puVar14 = *puVar14 - puVar14[1];
      break;
    case 0x62:
      if (puVar14[1] == 0) {
        *(undefined4 *)(param_1 + 4) = 0x85;
      }
      else {
        uVar16 = FUN_180575470(*puVar14,0x40);
        *puVar14 = uVar16;
      }
      break;
    case 99:
      uVar16 = FUN_1805753e0(*puVar14,puVar14[1]);
      *puVar14 = uVar16;
      break;
    case 100:
      if ((int)*puVar14 < 0) {
        *puVar14 = -*puVar14;
      }
      break;
    case 0x65:
      *puVar14 = -*puVar14;
      break;
    case 0x66:
      *puVar14 = *puVar14 & 0xffffffc0;
      break;
    case 0x67:
      *puVar14 = *puVar14 + 0x3f & 0xffffffc0;
      break;
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
      uVar16 = (*(code *)param_1[0x59])(param_1,*puVar14);
      *puVar14 = uVar16;
      break;
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
      uVar3 = *puVar14;
      iVar12 = *(int *)((longlong)param_1 + (ulonglong)(uVar16 & 3) * 4 + 0x1ac);
      if ((int)uVar3 < 0) {
        uVar3 = uVar3 - iVar12;
        if (0 < (int)uVar3) {
          uVar3 = uVar7;
        }
        *puVar14 = uVar3;
      }
      else {
        uVar3 = iVar12 + uVar3;
        if (-1 < (int)uVar3) {
          puVar17 = (undefined4 *)(ulonglong)uVar3;
        }
        *puVar14 = (uint)puVar17;
      }
      break;
    case 0x70:
      if (*(uint *)(param_1 + 0x3f) <= *puVar14) {
        cVar2 = *(char *)((longlong)param_1 + 0x2c6);
        goto joined_r0x00018058f0c1;
      }
      lVar21 = (longlong)*(int *)((longlong)param_1 + 0x184) * (longlong)(int)puVar14[1];
      *(int *)(param_1[0x40] + (ulonglong)*puVar14 * 4) =
           (int)((ulonglong)((lVar21 >> 0x3f) + 0x8000 + lVar21) >> 0x10);
      break;
    case 0x73:
    case 0x74:
    case 0x75:
      uVar16 = *puVar14;
      if (((int)uVar16 < 0) || (iVar18 / 2 < (int)uVar16)) {
        if (*(char *)((longlong)param_1 + 0x2c6) != '\0') {
          *(undefined4 *)(param_1 + 4) = 0x81;
        }
        uVar16 = iVar18 / 2;
      }
      *(uint *)((longlong)param_1 + 0x3c) = iVar18 + uVar16 * -2;
      iVar12 = (*(code *)param_1[0x60])(param_1);
      uVar7 = iVar12 - (uint)*(ushort *)((longlong)param_1 + 0x1cc);
      if ((char)param_1[0x3e] == 't') {
        uVar7 = uVar7 - 0x10;
      }
      else if ((char)param_1[0x3e] == 'u') {
        uVar7 = uVar7 - 0x20;
      }
      if ((uVar7 & 0xfffffff0) == 0) {
        do {
          while( true ) {
            if (uVar16 == 0) goto switchD_18058e13d_caseD_21;
            puVar9 = puVar14 + -1;
            puVar14 = puVar14 + -2;
            uVar16 = uVar16 - 1;
            if (*(uint *)(param_1 + 0x3f) <= *puVar9) break;
            if ((*puVar14 & 0xf0) == uVar7 * 0x10) {
              (*(code *)param_1[99])(param_1);
            }
          }
        } while (*(char *)((longlong)param_1 + 0x2c6) == '\0');
        goto LAB_18058fe17;
      }
      break;
    case 0x76:
      uVar16 = *puVar14;
      uVar7 = uVar16 & 0xc0;
      if (uVar7 == 0) {
        *(undefined4 *)(param_1 + 0x57) = 0x2000;
      }
      else if (uVar7 == 0x40) {
LAB_18058f714:
        *(undefined4 *)(param_1 + 0x57) = 0x4000;
      }
      else if (uVar7 == 0x80) {
        *(undefined4 *)(param_1 + 0x57) = 0x8000;
      }
      else if (uVar7 == 0xc0) goto LAB_18058f714;
      uVar7 = uVar16 & 0x30;
      if (uVar7 == 0) {
        *(undefined4 *)((longlong)param_1 + 700) = 0;
      }
      else if (uVar7 == 0x10) {
        *(int *)((longlong)param_1 + 700) =
             (int)((int)param_1[0x57] + ((int)param_1[0x57] >> 0x1f & 3U)) >> 2;
      }
      else if (uVar7 == 0x20) {
        *(int *)((longlong)param_1 + 700) = (int)param_1[0x57] / 2;
      }
      else if (uVar7 == 0x30) {
        iVar12 = (int)param_1[0x57] * 3;
        *(int *)((longlong)param_1 + 700) = (int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2;
      }
      iVar12 = (int)param_1[0x57];
      if ((uVar16 & 0xf) == 0) {
        iVar20 = iVar12 + -1;
      }
      else {
        iVar20 = ((uVar16 & 0xf) - 4) * iVar12;
        iVar20 = (int)(iVar20 + (iVar20 >> 0x1f & 7U)) >> 3;
      }
      *(int *)((longlong)param_1 + 700) = *(int *)((longlong)param_1 + 700) >> 8;
      *(int *)(param_1 + 0x58) = iVar20 >> 8;
      param_1[0x59] = (longlong)FUN_18058c6e0;
      *(int *)(param_1 + 0x57) = iVar12 >> 8;
      *(undefined4 *)(param_1 + 0x35) = 6;
      break;
    case 0x77:
      uVar16 = *puVar14;
      uVar7 = uVar16 & 0xc0;
      if (uVar7 == 0) {
        *(undefined4 *)(param_1 + 0x57) = 0x16a0;
      }
      else if (uVar7 == 0x40) {
LAB_18058f80d:
        *(undefined4 *)(param_1 + 0x57) = 0x2d41;
      }
      else if (uVar7 == 0x80) {
        *(undefined4 *)(param_1 + 0x57) = 0x5a82;
      }
      else if (uVar7 == 0xc0) goto LAB_18058f80d;
      uVar7 = uVar16 & 0x30;
      if (uVar7 == 0) {
        *(undefined4 *)((longlong)param_1 + 700) = 0;
      }
      else if (uVar7 == 0x10) {
        *(int *)((longlong)param_1 + 700) =
             (int)((int)param_1[0x57] + ((int)param_1[0x57] >> 0x1f & 3U)) >> 2;
      }
      else if (uVar7 == 0x20) {
        *(int *)((longlong)param_1 + 700) = (int)param_1[0x57] / 2;
      }
      else if (uVar7 == 0x30) {
        iVar12 = (int)param_1[0x57] * 3;
        *(int *)((longlong)param_1 + 700) = (int)(iVar12 + (iVar12 >> 0x1f & 3U)) >> 2;
      }
      iVar12 = (int)param_1[0x57];
      if ((uVar16 & 0xf) == 0) {
        iVar20 = iVar12 + -1;
      }
      else {
        iVar20 = ((uVar16 & 0xf) - 4) * iVar12;
        iVar20 = (int)(iVar20 + (iVar20 >> 0x1f & 7U)) >> 3;
      }
      *(int *)((longlong)param_1 + 700) = *(int *)((longlong)param_1 + 700) >> 8;
      *(int *)(param_1 + 0x58) = iVar20 >> 8;
      param_1[0x59] = (longlong)FUN_18058c730;
      *(int *)(param_1 + 0x57) = iVar12 >> 8;
      *(undefined4 *)(param_1 + 0x35) = 7;
      break;
    case 0x78:
      if (puVar14[1] != 0) goto switchD_18058e13d_caseD_1c;
      break;
    case 0x79:
      if (puVar14[1] == 0) {
        if ((*puVar14 == 0) && (iVar20 == 0)) goto LAB_18058f9e0;
        iVar12 = (int)param_1[0x3d] + *puVar14;
        *(int *)(param_1 + 0x3d) = iVar12;
        if ((iVar12 < 0) ||
           ((0 < (int)param_1[0x4a] &&
            (*(int *)(*(longlong *)(param_1[0x4b] + -8 + (longlong)(int)param_1[0x4a] * 0x18) + 8) <
             iVar12)))) goto LAB_18058f9e0;
        *(undefined4 *)((longlong)param_1 + 500) = 0;
        if ((-1 < (int)*puVar14) ||
           (*(int *)((longlong)param_1 + 0x334) = *(int *)((longlong)param_1 + 0x334) + 1,
           *(uint *)((longlong)param_1 + 0x334) <= *(uint *)(param_1 + 0x67))) break;
LAB_18058f9d4:
        *(undefined4 *)(param_1 + 4) = 0x8b;
      }
      break;
    case 0x7a:
      *(undefined4 *)(param_1 + 0x35) = 5;
      param_1[0x59] = (longlong)FUN_18058c6c0;
      break;
    case 0x7c:
      *(undefined4 *)(param_1 + 0x35) = 4;
      param_1[0x59] = (longlong)FUN_18058c840;
      break;
    case 0x7d:
      *(undefined4 *)(param_1 + 0x35) = 3;
      param_1[0x59] = (longlong)FUN_18058c690;
      break;
    case 0x80:
      iVar12 = *(int *)((longlong)param_1 + 0x1a4);
      if (iVar18 < iVar12) {
        if (*(char *)((longlong)param_1 + 0x2c6) != '\0') {
          *(undefined4 *)(param_1 + 4) = 0x81;
          *(undefined4 *)((longlong)param_1 + 0x1a4) = 1;
          break;
        }
      }
      else {
        *(int *)((longlong)param_1 + 0x3c) = iVar18 - iVar12;
        if (*(int *)((longlong)param_1 + 0x324) != 7) {
          do {
            while( true ) {
              if (iVar12 == 0) goto LAB_18058fab5;
              puVar9 = puVar14 + -1;
              puVar14 = puVar14 + -1;
              iVar12 = iVar12 + -1;
              if (*(ushort *)(param_1 + 0x1d) <= (ushort)*puVar9) break;
              pbVar13 = (byte *)(param_1[0x21] + (ulonglong)(ushort)*puVar9);
              *pbVar13 = *pbVar13 ^ 1;
            }
          } while (*(char *)((longlong)param_1 + 0x2c6) == '\0');
          goto LAB_18058fe17;
        }
      }
LAB_18058fab5:
      *(undefined4 *)((longlong)param_1 + 0x1a4) = 1;
      break;
    case 0x81:
      if (*(int *)((longlong)param_1 + 0x324) != 7) {
        uVar16 = puVar14[1];
        if ((*(ushort *)(param_1 + 0x1d) <= (ushort)uVar16) ||
           (uVar15 = (ushort)*puVar14, *(ushort *)(param_1 + 0x1d) <= uVar15)) goto LAB_18058fdae;
        for (; uVar15 <= (ushort)uVar16; uVar15 = uVar15 + 1) {
          *(byte *)((ulonglong)uVar15 + param_1[0x21]) =
               *(byte *)((ulonglong)uVar15 + param_1[0x21]) | 1;
        }
      }
      break;
    case 0x82:
      if (*(int *)((longlong)param_1 + 0x324) != 7) {
        uVar16 = puVar14[1];
        if ((*(ushort *)(param_1 + 0x1d) <= (ushort)uVar16) ||
           (uVar15 = (ushort)*puVar14, *(ushort *)(param_1 + 0x1d) <= uVar15)) goto LAB_18058fdae;
        for (; uVar15 <= (ushort)uVar16; uVar15 = uVar15 + 1) {
          *(byte *)((ulonglong)uVar15 + param_1[0x21]) =
               *(byte *)((ulonglong)uVar15 + param_1[0x21]) & 0xfe;
        }
      }
      break;
    case 0x85:
      uVar16 = *puVar14;
      uVar7 = uVar16 & 0xff;
      if (uVar7 == 0xff) {
        *(undefined1 *)((longlong)param_1 + 0x1d2) = 1;
      }
      else {
        if ((char)uVar16 != '\0') {
          if (((uVar16 >> 8 & 1) != 0) && (*(ushort *)(param_1 + 0x31) <= uVar7)) {
            *(undefined1 *)((longlong)param_1 + 0x1d2) = 1;
          }
          if (((*puVar14 & 0x200) != 0) && (*(char *)((longlong)param_1 + 0x18a) != '\0')) {
            *(undefined1 *)((longlong)param_1 + 0x1d2) = 1;
          }
          if (((*puVar14 & 0x400) != 0) && (*(char *)((longlong)param_1 + 0x18b) != '\0')) {
            *(undefined1 *)((longlong)param_1 + 0x1d2) = 1;
          }
          if (((*puVar14 & 0x800) != 0) && (uVar7 < *(ushort *)(param_1 + 0x31))) {
            *(undefined1 *)((longlong)param_1 + 0x1d2) = 0;
          }
          if (((*puVar14 & 0x1000) != 0) && (*(char *)((longlong)param_1 + 0x18a) != '\0')) {
            *(undefined1 *)((longlong)param_1 + 0x1d2) = 0;
          }
          if (((*puVar14 & 0x2000) == 0) || (*(char *)((longlong)param_1 + 0x18b) == '\0')) break;
        }
        *(undefined1 *)((longlong)param_1 + 0x1d2) = 0;
      }
      break;
    case 0x86:
    case 0x87:
      FUN_18058b9d0(param_1,puVar14);
      break;
    case 0x88:
      uVar16 = *puVar14;
      if ((uVar16 & 1) != 0) {
        puVar17 = (undefined4 *)(ulonglong)*(uint *)(*(longlong *)(*param_1 + 0x90) + 0x70);
      }
      uVar7 = (uint)puVar17;
      if (((uVar16 & 2) != 0) && (*(char *)((longlong)param_1 + 0x18a) != '\0')) {
        uVar7 = uVar7 | 0x100;
      }
      if (((uVar16 & 4) != 0) && (*(char *)((longlong)param_1 + 0x18b) != '\0')) {
        uVar7 = uVar7 | 0x200;
      }
      if (((uVar16 & 8) != 0) && (*(longlong *)(*param_1 + 0x408) != 0)) {
        uVar7 = uVar7 | 0x400;
      }
      uVar16 = *puVar14;
      if (((uVar16 & 0x20) != 0) && ((char)param_1[100] != '\0')) {
        uVar7 = uVar7 | 0x1000;
      }
      if ((*(int *)(*(longlong *)(*param_1 + 0x90) + 0x70) == 0x28) &&
         (iVar12 = (int)param_1[0x65], iVar12 != 2)) {
        if ((uVar16 & 0x40) != 0) {
          uVar7 = uVar7 | 0x2000;
        }
        if (((uVar16 >> 8 & 1) != 0) && (iVar12 == 4)) {
          uVar7 = uVar7 | 0x8000;
        }
        uVar16 = *puVar14;
        uVar3 = uVar7 | 0x20000;
        if ((uVar16 >> 10 & 1) == 0) {
          uVar3 = uVar7;
        }
        uVar7 = uVar3 | 0x40000;
        if ((uVar16 >> 0xb & 1) == 0) {
          uVar7 = uVar3;
        }
        if ((((uVar16 >> 0xc & 1) != 0) && (iVar12 != 3)) && (iVar12 != 4)) {
          uVar7 = uVar7 | 0x80000;
        }
      }
      *puVar14 = uVar7;
      break;
    case 0x89:
      FUN_18058a8c0(param_1,puVar14);
      break;
    case 0x8a:
      uVar16 = puVar14[2];
      uVar7 = puVar14[1];
      puVar14[2] = *puVar14;
      puVar14[1] = uVar16;
      *puVar14 = uVar7;
      break;
    case 0x8b:
      if ((int)*puVar14 < (int)puVar14[1]) {
        *puVar14 = puVar14[1];
      }
      break;
    case 0x8c:
      if ((int)puVar14[1] < (int)*puVar14) {
        *puVar14 = puVar14[1];
      }
      break;
    case 0x8d:
      if (-1 < (int)*puVar14) {
        *(uint *)((longlong)param_1 + 0x1d4) = *puVar14 & 0xffff;
      }
      break;
    case 0x8e:
      uVar16 = *puVar14;
      uVar7 = puVar14[1] - 1;
      if (2 < uVar7) {
LAB_18058fe0a:
        cVar2 = *(char *)((longlong)param_1 + 0x2c6);
        goto joined_r0x00018058f0c1;
      }
      uVar7 = 1 << ((byte)uVar7 & 0x1f);
      if ((uVar16 != 0) && (uVar16 != uVar7)) goto LAB_18058fdae;
      if ((int)param_1[0x3b] == 2) {
        *(byte *)((longlong)param_1 + 0x1d1) =
             ~(byte)uVar7 & *(byte *)((longlong)param_1 + 0x1d1) | (byte)uVar16;
      }
      else {
        if (((int)param_1[0x3b] != 3) || (puVar14[1] != 3)) goto LAB_18058fe0a;
        if (*(int *)(*(longlong *)(*param_1 + 0x90) + 0x70) == 0x28) {
          *(uint *)((longlong)param_1 + 0x324) = ~uVar16 & 4;
        }
      }
      break;
    case 0x91:
      if (*(longlong *)(*param_1 + 0x408) == 0) goto switchD_18058e13d_caseD_28;
      FUN_18058a6c0(param_1,puVar14);
      break;
    case 0x92:
      if (*(longlong *)(*param_1 + 0x408) == 0) goto switchD_18058e13d_caseD_28;
      *puVar14 = 0x11;
      break;
    default:
      if (bVar11 < 0xe0) {
        if (bVar11 < 0xc0) {
          if (bVar11 < 0xb8) {
            if (bVar11 < 0xb0) goto switchD_18058e13d_caseD_28;
            iVar20 = (int)param_1[0x3d];
            lVar21 = (longlong)iVar20;
            if ((int)(iVar20 + (uVar16 - 0xaf)) < *(int *)((longlong)param_1 + 0x1ec)) {
              if (uVar16 - 0xaf < (iVar12 - *(int *)((longlong)param_1 + 0x24)) + 1U) {
                lVar10 = uVar8 - 0xaf;
                if (0 < lVar10) {
                  iVar20 = iVar20 + (int)lVar10;
                  do {
                    lVar21 = lVar21 + 1;
                    puVar14[(longlong)puVar17] = (uint)*(byte *)(param_1[0x3c] + lVar21);
                    puVar17 = (undefined4 *)((longlong)puVar17 + 1);
                  } while ((longlong)puVar17 < lVar10);
                }
                goto LAB_18058ff7b;
              }
              goto LAB_18058ff3c;
            }
          }
          else {
            iVar20 = (int)param_1[0x3d];
            lVar21 = (longlong)iVar20;
            if ((int)(iVar20 + (uVar16 - 0xb7) * 2) < *(int *)((longlong)param_1 + 0x1ec)) {
              if (uVar16 - 0xb7 < (iVar12 - *(int *)((longlong)param_1 + 0x24)) + 1U) {
                lVar10 = uVar8 - 0xb7;
                if (lVar10 < 1) {
LAB_18058ff7b:
                  *(int *)(param_1 + 0x3d) = iVar20;
                }
                else {
                  do {
                    lVar21 = lVar21 + 2;
                    puVar14[(longlong)puVar17] =
                         (int)(short)((ushort)*(byte *)(param_1[0x3c] + -1 + lVar21) << 8) |
                         (uint)*(byte *)(param_1[0x3c] + lVar21);
                    puVar17 = (undefined4 *)((longlong)puVar17 + 1);
                  } while ((longlong)puVar17 < lVar10);
                  *(int *)(param_1 + 0x3d) = iVar20 + (int)lVar10 * 2;
                }
                break;
              }
              goto LAB_18058ff3c;
            }
          }
          goto LAB_18058ff27;
        }
        FUN_18058b480(param_1,puVar14);
      }
      else {
        FUN_18058b6e0(param_1,puVar14);
      }
    }
switchD_18058e13d_caseD_21:
    if ((int)param_1[4] == 0) {
      *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_1 + 0x3c);
      *(int *)(param_1 + 0x3d) = (int)param_1[0x3d] + *(int *)((longlong)param_1 + 500);
    }
    else {
      if ((int)param_1[4] != 0x80) goto LAB_18059009e;
      puVar17 = (undefined4 *)param_1[0x48];
      if (puVar17 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = puVar17 + (ulonglong)*(uint *)(param_1 + 0x47) * 5;
      }
      while( true ) {
        if (puVar4 <= puVar17) goto LAB_18059009e;
        if ((*(char *)(puVar17 + 4) != '\0') && ((char)param_1[0x3e] == *(char *)(puVar17 + 3)))
        break;
        puVar17 = puVar17 + 5;
      }
      if (*(int *)((longlong)param_1 + 0x254) <= (int)param_1[0x4a]) {
        *(undefined4 *)(param_1 + 4) = 0x86;
        goto LAB_18059009e;
      }
      puVar4 = (undefined4 *)(param_1[0x4b] + (longlong)(int)param_1[0x4a] * 0x18);
      *puVar4 = *(undefined4 *)((longlong)param_1 + 0x1dc);
      lVar21 = param_1[0x3d];
      puVar4[2] = 1;
      puVar4[1] = (int)lVar21 + 1;
      *(undefined4 **)(puVar4 + 4) = puVar17;
      cVar2 = FUN_18058a840(param_1,*puVar17,puVar17[1]);
      if (cVar2 == '\x01') goto LAB_18059009e;
    }
    if (*(int *)((longlong)param_1 + 0x1ec) <= (int)param_1[0x3d]) {
      if ((int)param_1[0x4a] < 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 4) = 0x83;
LAB_18059009e:
      return (int)param_1[4];
    }
    if (*(char *)((longlong)param_1 + 0x2c4) != '\0') {
      return 0;
    }
  } while( true );
}



