let MyDevices = {};

function loadJSON(path, success, error) {
    var xhr = new XMLHttpRequest();
    xhr.onreadystatechange = function() {
        if (xhr.readyState === 4) {
            if (xhr.status === 200) {
                success(JSON.parse(xhr.responseText));
            } else {
                error(xhr);
            }
        }
    };
    xhr.open("GET", path, true);
    xhr.send();
}
loadJSON(
    "https://raw.githubusercontent.com/ancient-devices/releases/main/website_api.json",
    myData,
    "jsonp"
);

function myData(Data) {
    MyDevices = Data;
    console.log(MyDevices);

    for (let val = 0; val < Data.length; val++) {
        let deviceElement = document.createElement("div");
        let dev = document.querySelector("#devices");
        deviceElement.id = "devices" + [val];
        deviceElement.className = "deviceClass";
        dev.appendChild(deviceElement);
        console.log(dev);
        console.log(deviceElement);
    }
    for (let index = 0; index < Data.length; index++) {
        document.querySelector("#devices" + [index]).innerHTML = `
        <div class="device-body">
        <div class="d-Head"><h3>${MyDevices[index].device_codename}</h3></div>
        <div class="d-img"><img height="150px" src=${MyDevices[index].phone_url}></img></div>
        <div class="d-info">
        <p>Maintainer Name : <span>${MyDevices[index].maintainer}</span>
        <br>Rom Support Group :<span><a href="${MyDevices[index].rom_support}">Link</a></span>
        <br>Device Support Group :<span> <a href="${MyDevices[index].device_supportgp_url}">Link</a></span>
        <br>Rom Changelog :<span> <a href="${MyDevices[index].changelog_url}">Link</a></span>
        <br>Date Updated :<span>${MyDevices[index].date_updated}</span>
        <br>Download Rom:<span><a href="${MyDevices[index].download_url}>">Download</a></p></span></div>
        </div>`;
    }
}