// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from map.djinni

package com.dropbox.djinni.test;

import java.util.ArrayList;
import java.util.HashMap;
import javax.annotation.CheckForNull;
import javax.annotation.Nonnull;

public class MapListRecord implements android.os.Parcelable {


    /*package*/ final ArrayList<HashMap<String, Long>> mMapList;

    public MapListRecord(
            @Nonnull ArrayList<HashMap<String, Long>> mapList) {
        this.mMapList = mapList;
    }

    @Nonnull
    public ArrayList<HashMap<String, Long>> getMapList() {
        return mMapList;
    }

    @Override
    public String toString() {
        return "MapListRecord{" +
                "mMapList=" + mMapList +
        "}";
    }


    public static final android.os.Parcelable.Creator<MapListRecord> CREATOR
        = new android.os.Parcelable.Creator<MapListRecord>() {
        @Override
        public MapListRecord createFromParcel(android.os.Parcel in) {
            return new MapListRecord(in);
        }

        @Override
        public MapListRecord[] newArray(int size) {
            return new MapListRecord[size];
        }
    };

    public MapListRecord(android.os.Parcel in) {
        this.mMapList = new ArrayList<HashMap<String, Long>>();
        in.readList(this.mMapList, getClass().getClassLoader());
    }

    @Override
    public int describeContents() {
        return 0;
    }

    @Override
    public void writeToParcel(android.os.Parcel out, int flags) {
        out.writeList(this.mMapList);
    }

}
